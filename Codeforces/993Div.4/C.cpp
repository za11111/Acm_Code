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
        long long m,a,b,c;
        cin>>m>>a>>b>>c;
        long long ans=0;
        long long m1,m2;
        m1=m2=m;
        if(m1 > a)
        {
            ans+=a;
            m1=m1-a;
        }
        else
        {
            ans+=m1;
            m1=0;
        }
        if(m2 > b)
        {
            ans+=b;
            m2=m2-b;
        }
        else
        {
            ans+=m2;
            m2=0;
        }
        ans+=min(c,m1+m2);
        cout<<ans<<endl;
    }
}
