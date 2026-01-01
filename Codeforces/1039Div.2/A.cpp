#include<bits/stdc++.h>

using namespace std;
long long a[100003];
long long b[100003];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        map<int,int>mp;
        int n;
        long long c;
        cin>>n>>c;
        for(int i = 0;i < n;i++)
        {
            cin>>a[i];
            if(a[i] <= c)
            {
                a[i] = log(c*1.0/a[i])/log(2);
                mp[a[i]+1]++;
            }
        }
        int ans =0 ;
        int now = 0;
        for(auto &[k,v]:mp)
        {
         ans+=v;
         if(k < ans)
             ans = k;
        }
        cout<<n-ans<<endl;

    }
}