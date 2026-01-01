#include <bits/stdc++.h>

using namespace std;
long long a[100003];
long long b[100003];

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m,s;
        cin>>n>>m>>s;
        long long fmax = -1e18;
        long long fmin = 1e18;
        for(int i = 0;i < n;i++)
        {
            cin>>a[i];
        }
        for(int i = 0;i < m;i++)
        {
            cin>>b[i];
            fmax = max(fmax,b[i]);
            fmin = min(fmin,b[i]);
        }
        long long ans = 0;
        for(int i = 0;i < n;i++)
        {
            if(a[i]<0)
                a[i] = a[i]*fmin;
            else
                a[i] = a[i]*fmax;
            ans += a[i];
        }
        if(ans >= s)
        {
            cout<<"YES\n";
            for(int i = 0;i < n;i++)
                cout<<a[i]<<" ";
            cout<<endl;
        }
        else
        {
            cout<<"NO\n";
            for(int i = 0;i < n;i++)
                cout<<a[i]<<" ";
            cout<<endl;
        }

    }
}