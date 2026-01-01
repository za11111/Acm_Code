#include <bits/stdc++.h>
using namespace std;
long long a[200003];
long long ans[200003];
long long fastpow(long long a,long long b,long long mod)
{
    long long ans = 1;
    a = a % mod;
    while(b)
    {
        if(b & 1)
            ans = ans * a % mod;//??
        a = a * a % mod;//??2 4 8 16
        b = b >> 1;//??
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    for(int i = 1;i <= n;i++)
    {
        cin>>a[i];
    }
    long long bns =0;
    map<long long,long long>mp;
    mp[0]++;
    for(int i = 1;i <= n;i++)
    {
        ans[i] = ans[i-1]^a[i];
        if(mp.count(ans[i]) !=0)
        {
            bns+=mp[ans[i]];
        }
        mp[ans[i]]++;
    }
    cout<<bns;
}