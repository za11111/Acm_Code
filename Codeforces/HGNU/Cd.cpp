#include <bits/stdc++.h>
using namespace std;
long long m = 998244353;
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
long long mod_inverse(long long a)
{
    return fastpow(a,m - 2,m);
}
int main ()
{
//    long long ans =0;
//    for(int i = 1;i <=1000;i++)
//    {
//        for(int j=1;j<=1000;j++)
//
//        {
//            ans = i* mod_inverse(j)%m;
//            if(ans == 990445569)
//            {
//                cout<<i<<" "<<j<<endl;
//            }
//        }
//
//    }
    cout<<mod_inverse(8);

}