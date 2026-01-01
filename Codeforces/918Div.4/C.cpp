#include <bits/stdc++.h>
using namespace std;

long long a[200003];
int main ()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
		int n;
        cin>>n;
        long long ans =0 ;
        for(int i =0;i < n;i++)
		{
            cin>>a[i];
            ans+=a[i];
		}
        if((long long)sqrt(ans)*(long long )sqrt(ans) ==ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
		//cout<<sum<<"\n";
    }
}
