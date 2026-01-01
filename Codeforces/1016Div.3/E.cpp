#include <bits/stdc++.h>

using namespace std;
long long a[200003];
int n,k;

map<int,int>mp;
int check(long long mid)
{
    long long sum = mid;
    long long ans =0 ;
    vector<bool> vt(mid,0);
    for(int i =0;i < n;i++)
    {
        if(a[i] < mid&&vt[a[i]]==0)
        {
            vt[a[i]] = true;
            sum--;
        }
        if(sum == 0)
        {
            ans++;
            if(ans >= k)
                return 1;
            vt.assign(mid,0);
            sum = mid;
        }

    }//mex max
    return 0;
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        mp.clear();
        cin>>n>>k;
        for(int i =0;i< n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        long long mex = 0;
        for(auto &[k,v]:mp)
        {
            if(k==mex)
            {
                mex++;
            }
            else
                break;
        }
        long long l,r,mid,ans;
         l =0;
         r = mex+1;
        while(l <=r )
        {
            mid = l+r>>1;
            if(check(mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else
                r = mid -1;
        }
        cout<<ans<<endl;
    }
}
