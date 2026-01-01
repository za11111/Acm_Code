#include <bits/stdc++.h>
using namespace std;
vector<int>a;
int dp[5002][5002];
int main ()

{
    int t;
    t = 1;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int i;
        int ans = 0;
        for(i = 0;i < n;i++)
        {
            int tt;
            cin>>tt;
            a.push_back(tt);
        }
        int shuxing = 0;
        int power;
        int zhili;
        power = zhili  =0;
        for(i =0;i < a.size();i++)
        {
            if(a[i]==0)
            {
                shuxing++;
            }
            if(a[i] < 0)
            {
                int maybe =0;
                if(power+1 >-a[i] )
                {
                    maybe = 1;
                }
                dp[power][++zhili] = dp[power][zhili];
                dp[++power][zhili] = dp[power][zhili] + maybe;
            }
            if(a[i] > 0)
            {
                int maybe =0;
                if(zhili+1 > a[i] )
                {
                    maybe = 1;
                }
                dp[power][++zhili] = dp[power][zhili]+ maybe;
                dp[++power][zhili] = dp[power][zhili] ;
            }


        }
        cout<<max(dp[power-1][zhili],dp[power][zhili-1]);

    }
}