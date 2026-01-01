#include <bits/stdc++.h>
using namespace std;

long long mod=1e9+7;
long long fastpow(long long a,long long b,long long mod)
{
    long long ans = 1;
    a = a % mod;
    while(b)
    {
        if(b & 1)
            ans = ans * a % mod;//要乘
        a = a * a % mod;//递推2 4 8 16
        b = b >> 1;//进位
    }
    return ans;
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n <=2) {
            cout << 0<<endl;
            continue;
        }
        long long tt = fastpow(3,n,mod);
        long long ttt = fastpow(2,n,mod);

        cout<<86*(tt*3-(ttt*2-2)-3)<<endl;
    }
}