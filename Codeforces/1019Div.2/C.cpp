#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long  n,k;
       cin>>n>>k;
       long long sum  =0;
       for(int  i=0;i < n;i++)
       {
           int t;
           cin>>t;
           sum+=t;
       }
       sum  =sum / n;
       if(sum <= k)
       {
           cout<<"YES\n";
       }
       else
       {
           cout<<"NO\n";
       }
    }

}
