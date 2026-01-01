#include <bits/stdc++.h>
using namespace std;
int mp[200003];
struct cj
{
    int sum;
    int index;
}mp1[200003];
vector<pair<int,int> > v;
int cmp(cj a,cj b)
{
    return a.sum > b.sum;
}

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(mp1,0, sizeof(mp1));
        v.clear();
        int n,m,k;
        cin>>n>>m>>k;
        for(int i  =0 ;i < n;i++)
        {
            int tt;
            cin>>tt;
            mp[tt] = 1;
        }
        int ans = 0;
        for(int i=0;i < m;i++)
        {
            int l,r;
            cin>>l>>r;
            if(l==r)
            {
                if(mp[l] != 0)
                    ans++;
                else
                    mp1[l].sum++;
            }
            else if(mp[l]  != 0)
            {
                if(mp[r] != 0)
                    ans++;
                else
                    mp1[r].sum++;
            }
            else
            {
                if(mp[r] != 0)
                {
                    mp1[l].sum++;
                }
                else
                {
                    v.push_back({l,r});
                }
            }

        }
        sort(mp1,mp1+n,cmp);
        if(n + 2 >= k)
        {
            cout<<m<<endl;
            continue;
        }
        else
        {
            for(auto p=v.begin();p != v.end();p++)
            {
                if(p->first == mp1[0].index &&p->second==mp1[1].index
                 ||p->first == mp1[1].index &&p->second==mp1[0].index){
                    ans++;
                }
            }

            cout<<ans+mp1[0].sum+mp1[1].sum<<endl;
        }
    }
}

