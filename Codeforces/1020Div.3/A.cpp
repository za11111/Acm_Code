#include <bits/stdc++.h>
using namespace std;

int main ()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       string s;
       cin>>s;
       int sum = 0;
       for(int i =0;i < n;i++)
       {
           if(s[i]=='1')
               sum++;
       }
       int ans = 0;
       for(int i=0;i < n;i++)
       {
           if(s[i]=='0')
           {
               ans+=sum+1;
           }
           else
           {
               ans +=sum-1;
           }
       }
       cout<<ans<<endl;
   }
}
