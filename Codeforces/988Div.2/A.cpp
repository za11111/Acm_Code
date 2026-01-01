#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        map<int,int> mp;
        int n;
        cin>>n;
        for (int  i =0;i < n;i++)
        {
            int tt;
            cin>>tt;
            mp[tt]++;
        }
        int ans=0;
        for(auto &it:mp)
        {
            ans+=it.first / 2;
        }
        cout<<ans << endl;
    }
}