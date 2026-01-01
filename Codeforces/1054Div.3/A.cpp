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
        for(int i =0;i < n;i++)
        {
            cin>>a[i];
        }
        int ans = 0;
        int cns,bns;
        cns = bns = 0;
        for(int i = 0;i < n;i++)
        {
           if(a[i] == -1)
               bns++;
           if(a[i] == 1)
               cns++;
            if(a[i] == 0)
                ans++;
        }

        cout<<ans+bns%2 * 2<<endl;
    }

}