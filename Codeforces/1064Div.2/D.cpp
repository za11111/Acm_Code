
#include <bits/stdc++.h>
using namespace  std;
long long a[200003];
long long dp[200003];
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long m = 998244353;
        long long n;
        cin>>n;
        for(int i =1;i <= n;i++)
        {
            cin>>a[i];
        }
        dp[1] = 1;
        sort(a+1,a+n+1);
        for(int i = 2;i<=n ;i++)
        {
            dp[i]= 1;
            if(a[i]!=a[i-1])
            {
                for(int j = 1;j <=i-1;j++)
                {
                    dp[i]+=dp[j];
                    dp[i]=dp[i]%m;
                }
            }
            else
            {
                dp[i]=dp[i-1]+1;
            }
        }
        cout<<dp[n]%m<<endl;
    }
}
