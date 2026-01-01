#include <bits/stdc++.h>

using namespace std;

int sum[34];
long long dis[100003];
long long pre[100003];
long long a[100003];
vector<int> g[100003];
void dfs(int u,int f)
{
    for(int i =0;i < g[u].size();i++)
    {
        int v = g[u][i];
        if(v == f)
            continue;
        pre[v] = pre[u] & a[v];
        long long h = pre[v];
        int num = 0;
        while(h > 0)
        {
            if(h & 1)
                dis[num]++;
            h>>=1;
        }
        sum[num ] ++;
        dfs(v,u);
    }
}

int main ()
{
    int n,q;
    cin>>n>>q;
    for(int i = 1;i <= n;i++)
    {
        cin>>a[i];
    }
    for(int i = 1;i <= n-1;i++)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    pre[1] = a[1];
    long long h = pre[1];
    int num = 0;
    while(h > 0)
    {
        if(h & 1)
            num++;
        h>>=1;
    }
    sum[num] ++;
    dfs(1,0);
    while(q--)
    {
        int x;
        cin>>x;
        cout<<sum[x]<<endl;
    }

}