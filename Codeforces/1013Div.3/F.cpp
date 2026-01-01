#include <bits/stdc++.h>

using namespace std;
char a[2003][2003];
long long dp[2003][2003][2];

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(dp,0, sizeof dp);

        int n,m,d;
        cin>>n>>m>>d;
        for(int i = 1;i <= n;i++)
        {
            for(int j = 1;j <= m;j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i = 1;i <= n;i++)
        {
            dp[n-1][i][]
        }
    }
}