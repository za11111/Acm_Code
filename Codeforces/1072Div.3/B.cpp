#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long s,k,m;
       cin>>s>>k>>m;
       if(k >= s)
       {
            if(s <= m%k)
                cout<<0<<endl;
            else
                cout<<s-m%k<<endl;
       }
       else
       {
           long long x = m/k;
           if(x %2 == 1)
           {
                cout<<k-m%k<<endl;
           }
           else
           {
                cout<<s-m%k<<endl;
           }
       }
    }

}