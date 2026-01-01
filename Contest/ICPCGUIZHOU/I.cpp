#include <bits/stdc++.h>

using namespace std;
constexpr long long mod = 1e9+7;
bool is(int test)
{
    for(int i = 2;i < test;i++)
    {
        if(test%i==0)
            return false;
    }
    return true;
}
long long fastpow(long long a,long long b)
{
    long long ans = 1;
    a = a % mod;
    while(b)
    {
        if(b & 1)
            ans = ans * a % mod;
        a = a * a % mod;
        b = b >> 1;
    }
    return ans;
}
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int ans = 1061;
    int n = 0;
    cin>>n;
    long long all = 1;
    all = fastpow(10,n-1)*9%mod;
    long long bns = 1;
    if(n >= 5)
    {

        bns = bns * 10 + (ans*9*fastpow(10,n-4-1)%mod+ans*9*fastpow(10,n-4)%mod)%mod;
        bns = bns %mod;
        cout<<(all-bns +mod) %mod;
    }else
        cout<<all-ans;
}