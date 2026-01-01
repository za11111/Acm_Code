#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long> a(n+2);
        vector<long long> dp1(n+2);
        vector<long long> dp2(n+2);
        vector<long long> ans1(n+2,-1e9);
        vector<long long> ans2(n+2,-1e9);
        for(int i = 1;i <= n;i++)
        {
            cin>>a[i];
        }
        for(int i = 1;i <= n;i++)
        {
            dp1[i] = max(a[i],a[i] +dp1[i-1]);
            ans1[i] = max(dp1[i],ans1[i-1]);
        }
        for(int i = n;i >=1;i--)
        {
            dp2[i] = max(a[i],a[i] +dp2[i+1]);
            ans2[i] = max(dp2[i],ans2[i+1]);
        }
        long long sum = -1e9;
        for(int i = 1;i <=n-1;i++)
        {
            sum = max(sum,ans1[i]+ans2[i+1]);
        }
        cout<<sum<<endl;
    }
    return 0;
}