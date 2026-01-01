#include <bits/stdc++.h>

using namespace std;
int a[12];
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        for(int i= 0 ;i < n;i++)
        {
            cin>>a[i];
        }
        int ans = 0;
        int bns = 0;
        int cns  =0;
        for(int i = 0;i < n;i++)
        {
            if(a[i] ==1&&cns ==0)
            {
                cns = 1;
                ans = i+m-1;
            }
            else if(a[i]== 1)
            {
                if(ans >= i)
                {}
                else
                {bns = 1;
                    break;}
            }
        }
        if(bns == 0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}