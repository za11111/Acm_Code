#include <bits/stdc++.h>
using namespace std;
#define mod 10007
int fac[10001];
int inv[10001];
int fastPow(int a,int b)
{
    int ans = 1;
    a = a % mod;
    while(b)
    {
        if(b & 1)
        {
            ans = ans * a %mod;
        }
        a = a *a %mod;
        b = b>>1;
    }
    return ans;

}
int C(int n,int m)
{
    return (fac[n] * inv[m] % mod *inv[n - m] % mod) % mod;
}
int main ()
{
    int a,b,n,m,k,ans;
    cin>>a>>b>>k>>n>>m;
    fac[0] = 1;
    for(int i = 1;i <= n + m;i++)
    {
        fac[i] = (fac[i - 1] * i)%mod;
        inv[i] = fastPow(fac[i],mod - 2);
    }
    ans = (fastPow(a,n) % mod * fastPow(b,m) % mod *C(k,n) % mod) %mod;
    cout<<ans;
    return 0;
}