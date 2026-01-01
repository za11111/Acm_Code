#include <bits/stdc++.h>
using namespace std;

vector<int> G[500003];
int a[500003];
int vis[500003];


void dfs(int x,int y)
{
    map<int,int> mp;
    mp[a[x]]++;
    mp[a[y]]++;
    for(int i = 0 ;i < G[x].size();i++)
    {
        if(G[x][i] != y)
        {
            dfs(G[x][i],x);
            mp[a[G[x][i]]]++;
        }
    }
    for(auto &[k,v] : mp)
    {
        if( v > 1)
            vis[k] = 1;
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        memset(vis, 0, sizeof vis);
        int n;
        cin>>n;
        for(int i = 1;i <= n;i++)
        {
            G[i].clear();
        }
        for(int i = 1;i <= n;i++)
        {
            cin>>a[i];
        }
        for(int i = 1;i < n;i++)
        {
            int u,v;
            cin>> u >>v;
            G[u].push_back(v);
            G[v].push_back(u);
        }
        dfs(1,0);
        string s="";

        for(int i = 1;i <=n;i++)
        {
            if(vis[i]==1)
                s+="1";
            else
                s+="0";
        }
        cout<<s<<"\n";
    }
    return 0;
}
