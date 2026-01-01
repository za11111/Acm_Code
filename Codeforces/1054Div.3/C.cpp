//
// Created by ZA on 2025/9/21.
//
#include <bits/stdc++.h>

using namespace std;
long long a[200003];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n,k;
      cin>>n>>k;
      for(int i =0;i < n;i++)
      {
          cin>>a[i];
      }
      map<int,int> mp;
      for(int i =0;i < n;i++)
      {
          mp[a[i]]++;
      }
      int ans =0;
      for(auto &[k,v] : mp)
      {
          if(k == ans)
          {
              ans++;
          }
          else
              break;
      }

          int mex = ans;
          if(k == mex)
            cout<<0<<endl;
          else if(k > mex)
          {
              int sum = 0;
              for(auto &[kk,v] : mp)
              {
                  if(kk < k)
                      sum++;
                  else
                      break;
              }
              cout<<k-sum+max(0,mp[k]-(k-sum))<<endl;
          }
          else
          {
              cout<<mp[k]<<endl;
          }



    }

}