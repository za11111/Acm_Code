#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n,x,k;
    cin>>n>>x>>k;
    string s;
    cin>>s;
    long long  ans = 0;
    int y  = 0;
    long long bns = 0;
    int cns = 0;
    for(long long i = 0; i < n;i++)
    {
        if(s[i] == 'L')
            y--;
        else
            y++;
        bns++;
        if(y == 0)
        {
            cns = 1;
            break;
        }
    }
    for(long long i = 0;i < n;i++)
    {
        if(s[i] == 'L')
            x--;
        else
            x++;
        ans++;
        if(x == 0)
        {
            k = k-ans;
            if(cns == 1)
            {
                cout<<1+ k / bns <<endl;
            }
            else
                cout<<1<<endl;
            return;
        }

    }
    cout<<0<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

}