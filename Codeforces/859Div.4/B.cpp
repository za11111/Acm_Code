
#include <bits/stdc++.h>
using namespace std;
vector <int> a(103);
vector<int> b(103);
int main ()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int ans =0;
        int bns =0 ;
        for(int i =0;i < n;i++)
        {
            int tt;
            cin>>tt;
            //cin>>a[i];
            if(tt%2==0)
            {
                ans+=tt;
            }
            else
            {
                bns+=tt;
            }
        }
        if(ans > bns)
        {
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
    }
}