
#include <bits/stdc++.h>
using namespace  std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        double a,b,n;
        cin>>a>>b>>n;
       // int ans = 1;
        double m = n;
        if(b > a/m&&b!=a)
        {
            cout<<2<<endl;
        }
        else
            cout<<1<<endl;
    }
}
