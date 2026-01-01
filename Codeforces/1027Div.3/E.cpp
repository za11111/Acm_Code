#include <bits/stdc++.h>
using namespace  std;
#define int long long
int ans [200003];
int bns [200003];
int a[200003];
vector<int> g[200003];
void dfs(int u,int f)
{
    if(u==1)
    {
        ans[1] = a[1];
        bns[1] = a[1];
     }
    else
    {
        ans[u] = max(a[u],a[u]-bns[f]);
        bns[u] = min(a[u],a[u]-ans[f]);
    }
    for(int i =0;i < g[u].size();i++)
    {
        int v = g[u][i];
        if(v==f)
            continue;
        dfs(v,u);
    }
}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(ans,0,sizeof ans);
        memset(bns,0,sizeof bns);
        int n;
        cin>>n;
        for(int i =1;i <= n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<=n-1;i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        dfs(1,0);
        for(int i =1;i<=n;i++)
        {

            cout<<ans[i]<<' ';
        }
        cout<<endl;
        for(int i =1;i<= n;i++)
            g[i].clear();
    }
}