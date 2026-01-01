//
// Created by ZA on 2025/9/21.
//
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {

       int n,m;
       cin>>n>>m;
       vector<int> a(m+1);
       vector<vector<int>> vt(n+2);
       for(int i = 0;i < n;i++)
       {
            int k;
            cin>>k;
            for(int j =0; j< k;j++)
           {
                int s;
                cin>>s;
                vt[i].push_back(s);
                a[s]++;
           }
       }
       int bns = 0;
       for(int i= 1;i<= m;i++)
       {
           if(a[i] ==0)
           {
               bns = 1;
               break;
           }
       }
       if(bns == 0)
       {
           int ans = 0;
           for(int i = 0;i < n;i++)
           {
               for(int j = 0;j < vt[i].size();j++)
               {
                   if(a[vt[i][j]] == 1)
                   {
                       ans++;
                       break;
                   }
               }
           }
           if(n-ans >= 2)
           {
               cout<<"YES\n";
           }
           else
               cout<<"NO\n";
       }
       else
       {
           cout<<"NO\n";
       }

    }

}