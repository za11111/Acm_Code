#include <bits/stdc++.h>

using namespace std;
char a[103][103];
int dir[103][103];
int n,m;

void dfs(int x,int y)
{
    if(x < 1||x > n||y < 1||y > m)
        return;
    dfs(x+1,y);
    dfs(x,y+1);
    dfs(x-1,y+1);
    dfs(x,y-1);
}
int main ()
{
    
    cin>>n>>m;
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
            cin>>a[i][j];
            if(a[i][j] != '0')
                dir[i][j] = 1;
        }
    }
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
            if(a[i][j] != '0')
            {
                dir[i][j] = 1;
                dfs(i,j);
            }
        }
    }
}