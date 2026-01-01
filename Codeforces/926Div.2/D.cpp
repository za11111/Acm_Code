#include <bits/stdc++.h>
using namespace std;
vector<int> g[300000];

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i =0; i < n;i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
    }
    return 0;
}