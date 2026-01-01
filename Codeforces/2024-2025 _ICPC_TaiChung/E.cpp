#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int t;
    //cin>>t;
    t = 1;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int tt = b-a;
        cout<<3<<endl;
        cout<<b<<" "<<b+10000<<" "<<b+3*a-3*b-10000;
    }
}
