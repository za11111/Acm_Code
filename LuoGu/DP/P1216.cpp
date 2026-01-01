#include <bits/stdc++.h>
using namespace std;
int dp[1002][1002];
int a[1002][1002];
int main ()
{
    int n;
    cin>>n;
    int i,j;
    for(i = 1;i <=n;i++)
    {
        for(j = 1;j <=i;j++)
        {
            cin>>a[i][j];
        }
    }
    int fmax= 0 ;
    for(i = 1;i <=n;i++)
    {
        for(j = 1;j <=i;j++)
        {
            dp[i][j] =a[i][j]+ max(dp[i-1][j-1],dp[i-1][j]);
            fmax = max(dp[i][j],fmax);
        }
    }
    cout<<fmax<<endl;

}