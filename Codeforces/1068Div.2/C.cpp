#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
int main ()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        map<int ,int> mp;

        for(int i = 0;i < n;i++)
        {
            int x;
            cin>>x;
            mp[x] = 1;
        }
        vector<int> vt;
        int bns = 0;
        for(auto &[k1,v1]:mp)
        {
            if(mp[k1]==2)
                continue;
            mp[k1] = 2;
            for(int j = k1;j <= k;j+=k1)
            {
                if(mp[j]==0)
                {
                    bns= 1;
                    break;
                }
                else
                    mp[j] = 2;
            }
            if(bns == 1)
            {
                break;
            }
            else
            {
                vt.push_back(k1);
            }
        }
        if(bns == 1)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<vt.size()<<endl;
            for(auto it:vt)
                cout<<it<<' ';
            cout<<endl;
        }
    }

}