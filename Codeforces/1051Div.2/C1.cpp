//
// Created by ZA on 2025/9/17.
//
#include <bits/stdc++.h>

using namespace  std;

struct Z{
    int v,x,y;
};
vector<Z> g[200003];
deque<long long> de;
int dir[200003];

void dfs(int u,int f)
{
    for(int i =0;i <g[u].size();i++)
    {
        if(g[u][i].v == f)
            continue;
        if(g[u][i].x > g[u][i].y )
        {
            if(dir[u] == 0)
            {
                de.push_back(u);
            }
            if(dir[g[u][i].v] == 0)
            {
                de.push_front(g[u][i].v);
            }
            dir[u] = 1;
            dir[g[u][i].v] = 1;
        }
        else
        {
            if(dir[u] == 0)
            {
                de.push_front(u);
            }
            if(dir[g[u][i].v] == 0)
            {
                de.push_back(g[u][i].v);
            }
            dir[u] = 1;
            dir[g[u][i].v] = 1;
        }
        dfs(g[u][i].v,u);
    }
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        memset(dir,0,(n+1) * sizeof (int));
        for(int i =0;i < n-1;i++)
        {
            int u,v,x,y;
            cin>>u>>v>>x>>y;
            g[u].push_back({v,x,y});
            g[v].push_back({u,y,x});
        }
        dfs(1,0);
        map<int,int>mp;
        int now= 1;
        for(auto it:de)
        {
            mp[it] = now;
                    now++;

            //de.pop();
        }
        for(auto &[k,v]:mp)
        {
            cout<<v<<' ';
        }

        cout<<endl;
        for(int i = 1;i <=n;i++)
        {
            g[i].clear();
        }
        de.clear();
    }
}