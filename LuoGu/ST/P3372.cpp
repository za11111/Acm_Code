//区间查询和单点修改

#include <bits/stdc++.h>
using namespace std;
#define N 500000
int a[N+1];
long long f[4*N+1];//f[i]为结点i的区间和
long long v[4*N+1];//当前点对应的区间每个人加上z

int n,m;
void bulidtree(int k,int l,int r)//标号为1的点的区间
{
	v[k] = 0;
	if(l == r)
	{
		f[k] = a[l];//两端和相同区间和等于本身
		return;
	}
	int m = (l+r)>>1;//1234  10
	bulidtree(k+k,l,m);
	bulidtree(k+k+1,m+1,r);
	f[k] = f[k+k+1]+f[k+k];
	
}

void insert(int k,int l,int r,int x,int y,long long z)//l-r区间里的xy区间加上z,k为当前查询区间
{
	if(l == x && r == y)
	{
		v[k] += z;
		return;
	}
	if(v[k])
	{
		v[k + k] += v[k];
		v[k + k + 1] += v[k];
		v[k] = 0;
	}
	int m = (l + r)>>1;
	if(y <= m)
	{
		insert(k + k, l, m, x, y, z);
	}
	else
	{
		if(x > m)
		{
			insert(k + k + 1, m+1, r, x, y, z);
		}
		else
		{
			insert(k + k, l, m, x, m, z);
			insert(k + k + 1, m + 1, r, m + 1, y, z);
		}
	}
	//标记回收 
	f[k] = f[k + k] + v[k + k] * (m - l + 1) + f[k + k + 1] + v[k + k + 1] * (r - m);
}
long long calc(int k,int l,int r,int s,int t)//k结点代表lr的区间，求st的和
{
	if(l==s&&r==t)
	{
		return f[k] + v[k] * (r - l + 1);
	}
	if(v[k])
	{
		v[k + k] += v[k];
		v[k + k + 1] += v[k];
		v[k] = 0;
	}
	int m = (l + r)>>1;
	long long res = 0;//记录查询结果,不能直接return,因为没有修改f的值
	if(t <= m)
	{
		res = calc(k + k,l,m,s,t);
	}
	else
	{
		if(s > m)
			res = calc(k + k + 1,m + 1,r,s,t);
		else
			res = calc(k + k,l,m,s,m) + calc(k + k + 1,m + 1,r,m+1,t);	
	}
	f[k] = f[k + k] + v[k + k] * (m - l + 1) + f[k + k + 1] + v[k + k + 1] * (r - m);
	return res;//f修改完后return结果
}
int main ()
{
	cin>>n>>m;
	for(int i = 1;i <= n;i++)
	{
		cin>>a[i];
	}
	bulidtree(1,1,n);
	for(int i = 1;i <= m;i++)//操作次数
	{
		int t,x,y;
		cin>>t>>x>>y;
		if(t == 2)//区间求和
		{
			cout<<calc(1,1,n,x,y)<<endl;
		}
		if(t == 1)//区间修改
		{
			int k;
			cin>>k;
			insert(1,1,n,x,y,k);
		}	
	}
	return 0;
}
