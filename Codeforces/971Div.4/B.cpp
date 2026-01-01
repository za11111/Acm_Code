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
    	int a[501];
		int n;
		cin>>n;
		int i,j;
		int ans = 1;
		for(i = 1;i <= n;i++)
		{
			string s;
			cin>>s;
			for(j = 0;j < 4;j++)
			{
				if(s[j] == '#')
				{
					a[ans] = j+1;
					ans++;
				}
			}
		}
		for(i = ans-1;i >=1;i--)
		{
			cout<<a[i]<<" ";
		}
		cout<<"\n";
    }
}
