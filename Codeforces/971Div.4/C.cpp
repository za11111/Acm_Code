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
		long long x,y,k;
		cin>>x>>y>>k;
		int x1 = x / k;
		int y1 = y / k;
		int sum = 0;
		if(x%k!=0)
		{
			x1++;
		}
		if(y%k!=0)
		{
			y1++;
		}
		if(x1 > y1+1)
		{
			sum = x1*2-1;
		}
		else if(x1 < y1)
		{
			sum = y1*2;
		}
		else
		{
			sum = x1+y1;
		}
		cout<<sum<<"\n";
    }
}
