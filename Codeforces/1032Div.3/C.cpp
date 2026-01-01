#include <bits/stdc++.h>

using namespace std;

bool cmp( pair<int,int> x,pair<int,int> y)
{
    if(x.first == y.first)
    {
        return x.second < y.second;
    }
    return x.first < y.first;
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,m;
        int fmax = 0;
        cin>>n>>m;
        vector<vector<int> > g(n+1);
        vector<pair<int,int> > p;
        for(int i =0;i< n;i++)
        {

            for(int j =0;j<m;j++)
            {
                int h;
                cin>>h;
                g[i].push_back(h);
                fmax = max(h,fmax);
            }
        }
        for(int i =0;i < n;i++)
        {
            for(int j =0;j<g[i].size();j++)
            {
                if(g[i][j] == fmax)
                {
                    p.push_back({i,j});
                }
            }
        }
        int cns = 0;
        sort(p.begin(),p.end(),cmp);
        int xx, yy;
        yy = xx =-1;
        for(int i = 0;i < p.size();i++)
        {
            if(i ==0)
            {
                xx = p[i].first;
            }
            else
            {
                if(xx == p[i].first)
                {
                    continue;
                }
                else if(yy == -1)
                {
                    yy = p[i].second;
                }
                else if(p[i].second==yy)
                {
                    continue;
                }
                else
                {
                    cns = 1;
                    break;
                }
            }
        }
        if(cns)
        {
            int bns = 0;

            yy = xx =-1;
            for(int i = 0;i < p.size();i++)
            {
                if(i ==0)
                {
                    yy = p[i].second;
                }
                else
                {
                    if(yy == p[i].second)
                    {
                        continue;
                    }
                    else if(xx == -1)
                    {
                        xx = p[i].first;
                    }
                    else if(p[i].first==xx)
                    {
                        continue;
                    }
                    else
                    {
                        bns = 1;
                        break;
                    }
                }
            }
            if(bns )
                cout<<fmax<<endl;
            else
                cout<<max(0,fmax-1)<<endl;


        }
        else
            cout<<max(0,fmax-1)<<endl;

    }
}

