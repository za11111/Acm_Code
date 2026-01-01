#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       string s;
       cin>>s;
       int ans;
       int bns = 0;
       ans = 0;
       for(int i = 0 ;i < n;i++)
       {
           if(s[i]=='-')
               ans++;
           else
               bns++;
       }
       if(ans >=2&&bns>=1)
       {
           if(ans%2==1)
           {
               cout<<1ll*(ans/2)*(ans/2+1)*bns<<endl;
           }
           else
           cout<<1ll*(ans/2)*bns*(ans/2)<<endl;
       }
       else
       cout<<0<<endl;
    }
}

//---___---