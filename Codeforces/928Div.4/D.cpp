#include <bits/stdc++.h>

using namespace std;
//int a[200003][2];
int main ()
{
	int t;
	cin>>t;
	while(t--)
	{
        map<int,int> mp;
		int n;
        cin>>n;
        for(int i =0;i < n;i++)
        {
            int tt;
            cin>>tt;
            mp[tt]++;
        }
        int ans = 0;
        int size = mp.size();
        for(auto &[k,v]:mp)
        {
            if(mp[INT_MAX-k] > 0)
            {
                ans+=max(mp[INT_MAX-k],v);
                mp[k] =0;
                mp[INT_MAX-k] = 0;
            }
            else if(v > 0)
            {
                ans+=v;
            }
        }
        cout<<ans<<endl;
	}
}
