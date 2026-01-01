#include <bits/stdc++.h>

using namespace std;
struct  cj
{
    long long x,y;
}point[2003];

bool dir[2003];
int fa[2003];
int query(int x) {
    while (x != fa[x]) {
        x = fa[x] = fa[fa[x]];
    }
    return x;
}

bool merge(int x, int y) {
    int fx = query(x);
    int fy = query(y);
    if (fx == fy) {
        return false;
    }
    fa[fy] = fx;

    return true;
}

bool same(int x, int y) {
    return query(x) == query(y);
}

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(fa,0,sizeof fa);
        memset(point,0,sizeof point);
        memset(dir,0,sizeof dir);
        long long  n,time;

        cin>>n>>time;
        for(int i =0;i < n;i++)
        {
            fa[i] = i;
        }
        for(int i =0; i < n;i++)
        {
            cin>>point[i].x>>point[i].y;
        }
        long long ans = 0;
        for(int i =0;i < n;i++)
        {

            for(int j =0;j < n;j++)
            {
                if(j==i)
                    continue;
                ans = abs(point[i].x-point[j].x)+abs(point[i].y - point[j].y);
                if(ans <= 1ll*time*2)
                {
                    merge(i,j);
                }
            }

        }
        int bns = 0;
        int cns = 0;
        for(int i =0;i < n;i++)
        {
            for(int j = 0;j < n;j++)
            {
                if(!same(i,j))
                {
                    bns = 1;
                    break;
                }
            }
        }

        if(bns)
            cout<<"NO\n";
        else
            cout<<"YES\n";

    }
}