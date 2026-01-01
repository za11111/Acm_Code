#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
struct Z
{
    int v;
    int w;
    friend bool operator < (Z a, Z b)
    {
        return a.w > b.w;
    }
};
const int INF = INT_MAX;
int a,b,c1,c2,c3;
void Dijkstra()
{

    int n = max(a,b)*2;
    vector<Z> g[10003];
    priority_queue<Z> q;
    vector<int> dis(n+2,0);
    vector<int> vis(n+2,0);
    for(int i = 1;i <= n;i++)
    {
        dis[i] = INF;
    }
    dis[a] = 0;
    dis[0] = INF;
    q.push({a,0});
    while(!q.empty())
    {
        int u = q.top().v;
        q.pop();
        if(vis[u])
            continue;
        if(u == b)
            break;
        vis[u] = 1;
        g[u].push_back({u+1,c1});
        g[u].push_back({u-1,c2});
        g[u].push_back({u*2,c3});
        for(int i = 0;i < g[u].size();i++)
        {
            if(dis[g[u][i].v] > dis[u]+g[u][i].w&&g[u][i].v >=1&&g[u][i].v <= n)
            {
                dis[g[u][i].v] = dis[u] + g[u][i].w;
                q.push({g[u][i].v,dis[g[u][i].v]});
            }
        }

    }
    cout<<dis[b]<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c1>>c2>>c3;
        if(a >= b)
        {
            cout<<(a - b) * c2 <<endl;
            continue;
        }
        Dijkstra();

    }



}