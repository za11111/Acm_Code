//
// Created by ZA on 2025/9/17.
//
#include <bits/stdc++.h>

using namespace  std;

struct Z{
    int u,v,x,y;
}a[200003];
bool cmp1(Z x,Z y)
{
    if(x.x == y.x)
    {
        return x.y < y.y;
    }
    return x.x < y.x;
}
bool cmp2(Z x,Z y)
{
    if(x.y == y.y)
    {
        return x.x < y.x;
    }
    return x.y < y.y;
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int dir[200003];
        int n;
        cin>>n;
        memset(dir,0, n+1);
        deque<long long > dq;
        for(int i =0;i < n-1;i++)
        {
            int u,v,x,y;
            cin>>a[i].u>>a[i].v>>a[i].x>>a[i].y;
        }
        sort(a,a+n-1,cmp1);
        queue<long long > qe;

        for(int i =0;i < n- 1;i++)
        {
            if(a[i].x > a[i].y)
            {
                if(dir[a[i].y] == 0)
                {
                    qe.push(a[i].v);
                }
                dir[a[i].y] = 1;
            }
            else
            {
                if(dir[a[i].x] == 0)
                {
                    qe.push(a[i].u);
                }
                dir[a[i].x] = 1;
            }
        }
        sort(a,a+n-1,cmp2);
        while(!qe.empty())
        {
            cout<<qe.front()<<' ';
            qe.pop();
        }
        cout<<endl;
    }
}