#include <bits/stdc++.h>

using namespace std;
//const int N = 1e5;

const int N=1e5+2;
int prime[N+1];
bool vis[N+1];
int cnt = 0;
void euler_sieve(int n)
{

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

}


int main ()
{
    euler_sieve(1e7);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long sum =0;
        cin>>n;
        for(int i = 0;i < cnt;i++)
        {
            if(prime[i] > n)
                break;
            if(prime[i])
            {
                sum+= n/prime[i];
            }
        }
        cout<<sum<<endl;
    }
}