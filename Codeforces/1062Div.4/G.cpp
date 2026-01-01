
#include <bits/stdc++.h>

using namespace  std;
long long a[8003];
long long c[8003];
long long dp[8003];
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i =0;i < n;i++)
        {
            cin>>a[i];
        }
        for(int i = 0;i < n;i++)
        {
            cin>>c[i];
        }
        long long ans = 0;

        for (int i = 0; i < n; i++)
        {
            ans += c[i];
            dp[i] = c[i];
            for (int j = 0; j < i; j++)
            {
                if (a[j] <= a[i])
                {
                    dp[i] = max(dp[i], dp[j] + c[i]);
                }
            }
        }
        cout << ans - dp[n-1] << "\n";
    }
}