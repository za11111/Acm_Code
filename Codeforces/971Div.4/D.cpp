#include <bits/stdc++.h>

using namespace std;
int a[200003][2];
int main ()
{
	int t;
	cin>>t;
	while(t--)
	{
		memset(a,0,sizeof(a));
		int n;
		cin>>n;
		int i;
		int ans = 0;
		int bns = 0;
		for(i = 0;i < n;i++)
		{
			int x,y;
			cin>>x>>y;
			if(y == 1)
			{
				ans++;
			}
			if(y == 0)
			{
				bns++;
			}
			a[x][y] = 1;
		}
		long long  sum = 0;
		for(int i = 0;i <= n;i++)
		{
			if(a[i][0] == 1)
			{
				if(a[i][1] == 1)
					sum += bns - 1;
				if(i == 0||i == n)
				{
					continue;
				}
				else
				{
					if(a[i+1][1] == 1&& a[i-1][1] == 1)
					{
						sum++;
					}
				}
			}
		}
		for(int i = 0;i <= n;i++)
		{
			if(a[i][1] == 1)
			{
				if(a[i][0] == 1)
					sum += ans - 1;
				if(i == 0||i == n)
				{
					continue;
				}
				else
				{
					if(a[i+1][0] == 1&& a[i-1][0] == 1)
					{
						sum++;
					}
				}
			}
		}
		cout<<sum<<endl;
	}
}
