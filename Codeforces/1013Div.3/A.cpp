#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int whoe;
    int b[10]={0};
    memset(b,0,sizeof b);
    int n;
    cin>>n;
    int ans =0 ;
    for(int i =0;i < n;i++)
    {
        cin>>whoe;
        b[whoe]++;
        if(ans >0)
            continue;
        if(b[0]>=3&&b[1]>=1&&b[2]>=2&&b[3]>=1&&b[5]>=1)
        {
            ans = i+1;

        }
    }
    cout<<ans<<endl;
    return;
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();

    }
}