#include <bits/stdc++.h>

using namespace std;
int a[200003];
map<int ,int> mp;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        mp.clear();
        int n;

        cin>>n;
        int ans = n;
        for(int i =0; i < n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }

        for(int i =0;i < n;i++)
        {
            if(mp[a[i]]!=-1 )
            {
                cout<<a[i]<<' ';
                mp[a[i]] = -1;
            }
            else
            {
                while(mp[ans]!=0)
                {
                   // mp[ans]++;
                    ans--;
                }
                mp[ans]++;
                cout<<ans<<" ";
            }
        }
        cout<<endl;
    }
}
