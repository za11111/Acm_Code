//
// Created by ZA on 2025/9/21.
//
#include <bits/stdc++.h>

using namespace std;
int a[1003];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int>mp;
        for(int i = 0;i < n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        //int fmin = 1e9;
        //map<int,int> mp1;
        long long fmax = 0;
        for(int i = 1;i <= 100;i++)
        {
            long long ans = 0;
            for(auto &[k,v]:mp)
            {
                if(v >= i)
                {
                    ans+=i;
                }
            }
            fmax = max(fmax,ans);
        }
        cout<<fmax<<endl;
    }

}