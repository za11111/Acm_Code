#include <bits/stdc++.h>
using namespace std;

int main ()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	cin>>t;
	while(t--)
	{
		int a[2],b[2];
		cin>>a[0]>>a[1]>>b[0]>>b[1];
		int i,j,k,l;
		int ans,bns,sum;
		ans = bns = sum = 0;
		for(i = 0;i <= 1;i++)
		{
			for(j = 0;j <= 1;j++)
			{//4
				if(a[i] > b[j])
				{
					ans++;
				}
				else if(a[i] < b[j])
				{
					bns++;
				}
				if(a[!i] > b[!j])
				{
					ans++;
				}
				else if(a[!i] < b[!j])
				{
					bns++;
				}
				if(ans > bns)
					sum++;
				ans = 0;
				bns = 0;
			}
		}
		cout<<sum<<"\n";
	}
}
