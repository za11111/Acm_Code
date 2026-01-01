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
        int a[1003];
        int n;
        cin>>n;
        int fmax =0;
        for(int i =0;i < n;i++)
        {
            cin>>a[i];
        }
        int ans =0;
        for(int i =0;i<n;i++)
        {
            if(a[i] ==0)
            {
                ans++;
            }
            if(a[i] ==1)
            {
                fmax=max(fmax,ans);
                ans = 0;
            }
        }
        fmax = max(fmax,ans);
        cout<<fmax<<endl;

    }
}
