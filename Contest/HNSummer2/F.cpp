#include <bits/stdc++.h>

using namespace std;
#define int long long
const int N = 4e7+2;
using LL = long long;

int prime[N+1];
bool vis[N+1];
int euler_sieve(int n)
{
    int cnt = 0;
    memset(vis, 0, sizeof(vis));
    memset(prime,0,sizeof(prime));
    for(int i = 2;i <= n;i++)
    {
        if(!vis[i])
            prime[cnt++] = i;
        for(int j = 0;j < cnt;j++)
        {
            if(i * prime[j] > n)
                break;
            vis[i * prime[j]] = 1;
            if(i % prime[j] == 0)//如果i能整除它，表明i肯定不是x的最小质因数
                break;
        }
    }
    return cnt;
}
LL qmi(LL a,int k, int p)
{
    LL res = 1;
    while(k)
    {
        if(k & 1) res = res * a % p;
        k >>= 1;
        a = a * a % p;
    }
    return res;
}

int C(int a,int b,int p)
{
    if(a < b) return 0;

    LL res = 1;
    for(int i = 1, j = a; i <= b; i ++ , j -- )
    {
        res = res * j % p;
        res = res * qmi(i, p - 2, p) % p;
    }
    return res;
}

LL lucas(LL a, LL b, int p)
{
    if(a < p && b < p) return C(a, b, p);
    return C(a % p, b % p, p) * lucas(a / p, b / p, p) % p;
}

signed main ()
{
    long long n,m;
    long long p = 1e9+7;
    cin>>n>>m;
    long long sum =euler_sieve(5)+1;
    long long ans = lucas(n,m,p);

        long long all = 0;
        for(int i =1;i<=m&&i<=sum;i++)
        {
            all+=lucas(sum,i,p)*lucas(n-sum,m-i,p)%p;
            all = all%p;
        }
        cout<<(ans - all+p)%p;


}