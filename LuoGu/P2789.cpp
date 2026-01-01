//
// Created by ZA on 2024/9/10.
//
//
// Created by ZA on 2024/9/10.
//
#include <bits/stdc++.h>
using namespace std;

int ans = 0;
bool f[10010];
void dfs(int p,int m)
{
    if(p == 0)
    {
        if(f[m] == 0)
        {
            ans++;
        }
        f[m] = 1;
    }
    else
    {
        for(int r = p;r >= 1;r--)
        {
            dfs(p-r,r*(p-r) + m);
        }
    }
}
int main ()
{


    int n;
    cin>>n;
    dfs(n,0);
    cout<<ans;
    return 0;
}