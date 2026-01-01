#include <bits/stdc++.h>
using namespace std;
int dp[1002][1002];
int w[102];
int v[102];
int main ()
{
    int fw,n;
    cin>>fw>>n;
    for(int i= 1;i <= n;i++)
    {
        cin>>w[i];
        cin>>v[i];
    }
    //int j = fw;

    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= fw;j++)
        {
            if(j<w[i])
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
        }

    }
    cout<<dp[n][fw];

}