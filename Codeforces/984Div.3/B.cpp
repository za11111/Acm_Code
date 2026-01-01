#include <bits/stdc++.h>
using namespace std;
int a[200003];
map<long long ,long long > mp;
bool cmp(pair<long long,long long> x,pair<long long,long long> y)
{
    return x.second > y.second;
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        mp.clear();
        int kk,n;
        cin>>kk>>n;
        for(int i =0;i < n;i++)
        {
            int c,b;
            cin>>c>>b;
            mp[c]+=b;
        }
        int ans =0;
        long long sum =0;
        vector<pair<long long,long long> >vt;
        for(auto it = mp.begin();it != mp.end();it++)
        {
            vt.push_back(pair<long long,long long>(it->first,it->second));
        }
        sort(vt.begin(),vt.end(),cmp);
        for(auto it:vt)
        {
            sum+=it.second;
            ans++;
            if(ans ==  kk)
                break;
        }
        cout<<sum<<endl;

    }
}