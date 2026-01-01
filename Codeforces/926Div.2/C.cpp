
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long  k,x,a;
        cin>>k>>x>>a;
        int ans = 1;
        long long need =0 ;
        for(int i = 1; i<=x+1;i++)
        {
            long long tt;// >6 6/3
            tt = (need+1+k-1-1)/(k-1);
            need += tt;
            if(need > a)
            {
                ans = 0;
                break;
            }
        }
        if(ans==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
    return 0;
}