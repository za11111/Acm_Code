#include <bits/stdc++.h>

using namespace std;
int a[1003];
int  dp[1003];
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(dp,0,sizeof (dp));
        int n;
        cin>>n;
        for(int i=0;i <n;i++)
        {
            cin>>a[i];
        }
        int  fmin = a[0];
        for(int i =0;i < n;i++)
        {
            if(a[i] < fmin) {
                fmin = a[i];
            }
            dp[i] = max(dp[i-1],a[i]-fmin);
        }
        cout<<dp[n-1]<<endl;
    }
}