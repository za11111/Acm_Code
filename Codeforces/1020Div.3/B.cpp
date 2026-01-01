#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int ans =0;
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        for(int i=x-1;i>=0;i--)
        {
            ans++;
            if(ans == n)
                cout<<i<<' '<<endl;
            else
                cout<<i<<' ';
        }
        if(ans == n)
        {
            continue;
        }
        for(int i=x+1;i<=n-1;i++)
        {
            ans++;
            if(ans == n)
                cout<<i<<' '<<endl;
            else
                cout<<i<<' ';
        }
        if(ans ==n)
        {}
        else
        cout<<x<<' '<<endl;
    }
}
