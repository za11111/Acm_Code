#include <bits/stdc++.h>

using namespace std;
int n;
long long f_min = 1e9,f_max=0;
struct Z
{
    long long v,w;
};
vector<pair<long long,long long> > vt(200003);
vector<Z> g[200003];
long long a[200003];
int bns = 0;
long long l = 1;
long long r = 1e9;
void dfs(int u,int f,int dir)
{//[1,1e9]
    if(bns==1)
        return;
    for(int i =0;i < g[u].size();i++)
    {

        int v = g[u][i].v;
        if(v==f)
            continue;
        if(dir == 0)
        {\}

    }
}
void dfs2 (int u,int f)
{
    for(int i =0;i < g[u].size();i++)
    {
        int v = g[u][i].v;
        if(v==f)
            continue;
        a[v] = g[u][i].w - a[u];
        dfs2(v,u);
    }
}
int main ()
{
    cin>>n;
    for(int i =0 ;i  <n-1;i++)
    {
        long long u,v,w;
        cin>>u>>v>>w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    dfs(1,0,0);

}
/*
5
1 2 5
1 3 4
3 4 3
3 5 2
 */