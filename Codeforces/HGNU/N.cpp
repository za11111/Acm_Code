#include <bits/stdc++.h>
using namespace std;
map<int,int > mp;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        mp.clear();
        int n;
        cin>>n;
        int ans =0 ;
        for(int i =0 ;i < n;i++) {
            int tt;
            cin >> tt;
            if (tt == 1)
                continue;
            else
                mp[tt]++;
        }
        int bns =0;
        //int ans = 0;
        for(auto &[k,v]:mp)
        {
            if(k%2 ==0) {
                ans++;
                bns ++;
            }
            if(v >= 2)
                ans+=v-1;
        }
        if(bns >= 1)
            ans--;
        if(mp[5] > 0)
        {
            if(mp[10]>0)
            {
                ans++;
            }
        }
        if(mp[3] > 0)
        {
            if(mp[9]>0)
            {
                ans++;
                if(mp[6] >0)
                    ans++;
                else if(mp[12]>0)
                    ans++;
            }
            else if(mp[6]>0)
                ans++;
            else if(mp[12]>0)
                ans++;
        }
        else if(mp[9]>0)
        {
            if(mp[6] > 0)
                ans++;
            else if(mp[12] > 0)
                ans++;
        }
        cout<<ans<<endl;

    }
}