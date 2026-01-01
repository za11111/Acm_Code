//区间查询和单点修改

#include <bits/stdc++.h>
using namespace std;
#define N 500000
int a[N+1];
long long f[4*N+1];//f[i]为结点i的区间和
long long v[4*N+1];
long long u[4*N+1];
long long d[4*N+1];//当前点对应的区间每个人加上z
int n,m;
int now;
void bulidtree(int k,int l,int r)//标号为1的点的区间
{
	v[k] = 0;
	d[k] = 0;
	if(l == r)
	{
		f[k] = a[l];//两端和相同区间和等于本身
		return;
	}//1 2 3 4  1+4 * 4 / 2
	int m = (l+r)>>1;//1234  10
	bulidtree(k+k,l,m);
	bulidtree(k+k+1,m+1,r);
	f[k] = f[k+k+1]+f[k+k];
	
}
void pushdown(int k,int l,int r,int now)
{
	int m =  (l + r) >> 1;
	if(u[k])
	{	
		v[k + k] += v[k];
		d[k + k] += d[k];//1 2 3 4
		u[k + k] = 1; //
		
		v[k + k + 1] += v[k] + (m + 1 - l)*d[k];//2+4
		d[k + k + 1] += d[k];
		u[k + k + 1] = 1;
	}
	u[k] = 0;
	v[k] = d[k] = 0;
}
void insert(int k,int l,int r,int x,int y,int sx,int gc,int now)//l-r区间里的xy区间加上z,k为当前查询区间
{
	if(l == x && r == y)
	{
		u[k] = 1;
		d[k] += gc;
		v[k] += sx + gc*(l - now);
		
		return;
	}
	pushdown(k,l,r,now);
	int m = (l + r)>>1;
	if(y <= m)
	{
		insert(k + k, l, m, x, y,sx,gc,now);
	}
	else
	{
		if(x > m)
		{
			insert(k + k + 1, m + 1, r, x, y,sx,gc,now);
		}
		else
		{
			insert(k + k, l, m, x, m,sx,gc,now);
			insert(k + k + 1, m + 1, r, m + 1, y,sx,gc,now);
		}
	}
	//标记回收 
}

long long calc(int k,int l,int r,int x,int now)//k结点代表lr的区间，求st的和
{
	if(l == r)
	{
		f[k] += v[k];
		v[k] = 0;
		u[k] = 0;	
		d[k] = 0;
		return f[k];
	}
	pushdown(k, l ,r,now);
	int m = (l + r) >> 1;
	long long res = 0;
	if(x <= m)
	{
		return calc(k + k, l, m, x,now);
	}
	else
	{
		return calc(k + k + 1, m+1, r, x,now);
	}
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
		int t;
		cin>>t;
		
		if(t == 1) 
		{
			int l,r,sx,gc;
			cin>>l>>r>>sx>>gc;
			now = l;
			insert(1, 1, n, l, r,sx,gc,now);
		}
		if(t == 2)
		{
			int p;
			cin>>p;
			cout<<calc(1,1,n,p,now)<<endl;
		}
	}
	return 0;
}