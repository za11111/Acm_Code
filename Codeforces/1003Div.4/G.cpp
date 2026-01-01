#include <bits/stdc++.h>
using namespace std;
map<int ,int> mp;
const int N = 2e5+10;
int prime[N+1];
bool vis[N+1];
int p[20];//记录因数，p[1]为最小因数
int c[40];//记录第i个因数的个数，
int  factor(int n)
{
    int who = 0;
    memset(p,0,sizeof p);
    memset(c,0,sizeof c);
    int m = 0;
    int pp = 2;
    for(int i = pp;i <= sqrt(n);i++)
    {
        if(n % i == 0)
        {
            pp = i;//方便从pp遍历到sqrt(n)
            p[++m] = i;
            c[m] = 0;
            while(n % i== 0)//把n中重复的去掉
            {
                n = n / i;
                c[m]++;
                who++;//去一次个数加1
            }
        }
    }
    if(n > 1)
    {
        p[++m] = n;
        c[m] = 1;
        who++;
    }

    return who;
}
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
void solve() {
    mp.clear();
    int n ;
    cin>>n;
    int all  =0 ;
    for(int  i =0; i < n;i++)
    {
        int tt;
        cin>>tt;
        if(vis[tt] == 0)
            all++;
        mp[tt]++;
    }
    long long  ans = 0;
    long long  f = 0;
    for(int i =2;i <= n;i++)
    {
        int vs = factor(i);
        if(vs == 2)
        {
            ans += 1ll*mp[i]*(mp[i]+1)/2;
            ans +=1ll*mp[i]*mp[p[1]];
            ans +=1ll*mp[i]*mp[p[2]];
        }
    }
    for(auto &[k,v]:mp)
    {
        if(vis[k]==0)
            f+=1ll*v*(all-v);
    }
    ans+=f/2;
    cout<<ans<<endl;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    euler_sieve(2e5);
    while (t--) {
        solve();
    }

    return 0;
}