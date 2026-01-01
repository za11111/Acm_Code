#include <bits/stdc++.h>
using namespace std;
int ans = 0 ;
char a[1003][1003];
void dfs(int i,int j)
{
    
}
int main ()
{
    int n,m;
    cin>>n>>m;
    for(int i =1; i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
            if(a[i][j] == '#')
            {
                dfs(i,j);
            }
        }
    }
}