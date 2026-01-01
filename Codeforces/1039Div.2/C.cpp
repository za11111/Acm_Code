#include<bits/stdc++.h>

using namespace std;
long long a[200002];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i = 0;i < n;i++)
        {
            cin>>a[i];
        }
        long long ans;
        int bns = 0;
        for(int i = 0;i < n;i++)
        {
            if(i == 0)
               ans= a[i];
            else
            {
                if(a[i] <=ans*2-1)
                {
                    ans = min(ans,a[i]);
                    continue;
                }
                else{
                    bns = 1;
                    break;
                }
            }
        }
        if(bns==1)
        {
            cout<<"NO\n";
        }
        else
            cout<<"YES\n";
    }
}