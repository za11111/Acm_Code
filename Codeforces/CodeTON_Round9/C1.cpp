#include <bits/stdc++.h>
using namespace  std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,m;
        cin>>x>>m;
        int ans =0;
        int i;
        for(i = 1;i<=min(x*2,m);i++)
        {
            if(i == x)
                continue;
            long long tt = i^x;
            if( i%tt==0||x%tt==0)
                ans++;
        }
        cout<<ans<<endl;
    }
}


