//区间查询和单点修改

#include <bits/stdc++.h>
using namespace std;
#define N 100001
int a[N+1];
long long f[4*N+1];//f[i]为结点i的区间和
long long v[4*N+1];//当前点对应的区间每个人加上z

int n,m;
void bulidtree(int k,int l,int r)//标号为1的点的区间
{
	v[k] = 0;
	if(l == r)
	{
		f[k] = 0;//两端和相同区间和等于本身
		return;
	}
	int m = (l+r)>>1;//1234  10
	bulidtree(k+k,l,m);
	bulidtree(k+k+1,m+1,r);
	f[k] = f[k+k+1]+f[k+k];
	
}

void insert(int k,int l,int r,int x,int y)//l-r区间里的xy区间加上z,k为当前查询区间
{
	if(l == x && r == y)
	{
		f[k] = r - l + 1 - f[k];
		if(v[k] == 0)
			v[k] = 1;
		else
			v[k] = 0;
		return;
	}
	int m = (l + r)>>1;
	if(v[k])// 2 3 // 2 2 3 3
	{
		f[k + k] = m - l + 1 - f[k + k];
		f[k + k + 1] = r - m - f[k + k + 1];
		if(v[k + k] == 0)
		{
			v[k + k] = 1;
		}
		else
		{
			v[k + k] = 0;
		}
		if(v[k + k + 1] == 0)
		{
			v[k + k + 1] = 1;
		}
		else
		{
			v[k + k+1] = 0;
		}
		v[k] = 0;
	}
	if(y <= m)
	{
		insert(k + k, l, m, x, y);
	}
	else
	{
		if(x > m)
		{
			insert(k + k + 1, m + 1, r, x, y);
		}
		else
		{
			insert(k + k, l, m, x, m);
			insert(k + k + 1, m + 1, r, m + 1, y);
		}
	}
	//标记回收 
	f[k] = f[k+k]+f[k+k+1];
}
long long calc(int k,int l,int r,int s,int t)//k结点代表lr的区间，求st的和
{
	if(l==s&&r==t)
	{
		return f[k];
	}
	int m = (l + r)>>1;
	if(v[k])
	{
		f[k + k] = m - l + 1 - f[k + k];
		f[k + k + 1] = r - m  - f[k + k + 1];
		if(v[k + k] == 0)
			v[k + k] = 1;
		else
			v[k + k] = 0;
			
		if(v[k + k + 1] == 0)
			v[k + k + 1] = 1;
		else
			v[k + k + 1] = 0;
		v[k] = 0;
	}
	long long res = 0;//记录查询结果,不能直接return,因为没有修改f的值
	if(t <= m)
	{
		res = calc(k + k,l,m,s,t);
	}
	else
	{
		if(s > m) 
			res = calc(k + k + 1, m + 1, r, s, t);
		else
			res = calc(k + k, l, m, s, m) + calc(k + k + 1, m + 1, r, m+1, t);	
	}
	f[k] =f[k+k]+f[k+k+1];
	return res;
}
int main ()
{
	cin>>n>>m;
	bulidtree(1,1,n);
	for(int i = 1;i <= m;i++)//操作次数
	{
		int t,a,b;
		cin>>t>>a>>b;
		if(t == 0)
		{
			insert(1,1,n,a,b);
		}	
		if(t == 1)
		{
			cout<<calc(1,1,n,a,b)<<endl;
		}
	}
	return 0;
}