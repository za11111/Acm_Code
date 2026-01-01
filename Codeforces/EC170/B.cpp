#include <bits/stdc++.h>
using namespace std;
long long a[100003];
long long b[100003];
#define N 1000000007
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
    t = 1;
    while(t--)
    {
        int n;
        cin>>n;
            int i;
        for(i = 0;i < n;i++)
        {
            cin>>a[i];
        }
        for(i =0 ;i < n;i++)
        {
            cin>>b[i];
        }
        for(i =0 ;i < n;i++)
        {
            long long sum =1;
            cout<<fastpow(2,b[i],N)<<endl;
        }






    }
}