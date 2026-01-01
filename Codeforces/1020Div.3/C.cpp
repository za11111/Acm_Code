#include <bits/stdc++.h>
using namespace std;
long long a[200003];
long long b[200003];
map<long long,long long> mp;
int main ()
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
       for(int i=0;i < n;i++)
       {
           cin>>b[i];
       }
       long long now = -1;
       int ans =0;
       for(int i =0;i < n;i++)
       {
           if(b[i] != -1)
           {
               if(now ==-1)
               {
                   now = a[i]+b[i];
               }
               else
               {
                   if((a[i]+b[i])!=now)
                   {
                       ans =1;
                       break;
                   }
               }

           }
       }
       if(ans == 1)
       {
           cout<<0<<endl;
           continue;
       }
       if(now == -1)
       {
           long long fmin = 1e18;
           long long fmax= 0;
           for(int i =0;i < n;i++)
           {
               fmin  = min(a[i],fmin);
              fmax=  max(a[i],fmax);
           }
           cout<<fmin+k-fmax +1<<endl;
       }
       else
       {
           ans = 0;
           for(int i=0;i<n;i++)
           {
               if(now-a[i] >=0&&now-a[i] <=k)
               {

               }
               else
               {
                   ans = 1;
                   break;
               }
           }
           if(ans == 1)
           {
               cout<<0<<endl;
               continue;
           }
           else
               cout<<1<<endl;
       }

    }
}
  6 2 4 6
1 5 9 4 4
1 5 2 4 9