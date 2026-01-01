#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r,d,u;
        cin>>l>>r>>d>>u;
        if(abs(l)==abs(r) &&abs(l)==abs(d)&&abs(l)==abs(u))
        {
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
    }
}