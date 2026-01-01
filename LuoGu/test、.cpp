#include <bits/stdc++.h>

using namespace std;
int n;
int vis[200][200];
string s;
pair<int,int> pr;
set<pair<int,int>>st;
void dfs(int x1,int y1,int ans)
{
    if(ans == n)
    {
        st.insert({x1,y1});
        return;
    }
    int x,y;
    x = y = 0;
    if(s[ans] == 'R')
        x++;
    if(s[ans] == 'U')
        y++;
    if(s[ans] == 'L')
        x--;
    if(s[ans] == 'D')
        y--;
    if(vis[x1+50][y1+50] == 0)
    {
        vis[x1][y1] = 1;
        dfs(x1+x,y1+y,ans+1);
        vis[x1][y1] = -1;
        dfs(x1,y1,ans+1);
        vis[x1][y1] = 0;
    }
    else if(vis[x1+50][y1+50] == 1)
    {
        dfs(x1+x,y1+y,ans+1);
    }
    else if(vis[x1+50][y1+50] == -1)
    {
        dfs(x1,y1,ans+1);
    }
}
int main ()
{
    cin>>n;
    cin>>s;
    dfs(0,0,0);
    cout<<st.size()<<"\n";
	for(auto [x,y]:st)
	{
		cout<<x<<" "<<y<<"\n";
    }
    return 0;
}
