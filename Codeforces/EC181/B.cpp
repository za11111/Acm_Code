#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,k;
        cin>>a>>b>>k;
        if(a == b)
            cout<<1<<endl;
        else
        {
            long long n = __gcd(a,b);
            if( a/n <= k&&b/n<=k)
                cout<<1<<endl;
            else
                cout<<2<<endl;
        }
    }
}