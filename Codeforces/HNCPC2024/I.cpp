#include <bits/stdc++.h>

using namespace std;
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
bool a[10003];
int main ()
{
    long long n,m,k,q;
    cin>>n>>k>>m>>q;
    int i;long long t;
    for(i = 0;i < m;i++)
    {

        cin>>t;
        for(int j=1;j<=k;j++)
        {
            a[fastpow(t,j,n)] = 1;
        }
    }
    for(i =0;i < q;i++)
    {

        cin>>t;
        int ans = 0;
        for(int j = 1;j<=k;j++)
        {
            if(a[fastpow(t,j,n)] == 1)
            {
                ans = 1;
            }
            else
            {
                ans = 0;
                break;
            }
        }
        if(ans == 0)
        {
            cout<<0<<" ";
        }
        else
            cout<<1<<" ";
    }


}
//11 3 4 5
//1 5 3 8
//4 7 1 0 4