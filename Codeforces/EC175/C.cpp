#include <bits/stdc++.h>
using namespace std;
long long a[300003];
int n,k;
string s;
int check(long long mid)
{
    vector<long long> aa;
    for(int i =0;i < n;i++)
    {
        if(a[i] > mid)
        {
            aa.push_back(i);
        }
    }
    int sum=0;
    int ans = 0;
    for(int i =0;i < aa.size();i++)
    {
        if(s[aa[i]] =='B')
        {
            ans = 1;
        }
        else
        {
            if(ans == 1)
            {
                ans = 0;
                sum++;
            }
        }
    }
    if(ans == 1)
        sum++;
    if(sum >k)
        return 0;
    else
        return 1;
    //return sum;

}
void solve()
{

    cin>>n>>k;

    cin>>s;
    for(int i = 0;i < n;i++)
    {
        cin>>a[i];
    }
    long long ans =0;
    int sum = 0;
    for(int i =0 ;i < n;i++)
    {
        if(s[i]=='B')
        {
            ans = 1;
        }
        else
        {
            if(ans == 1)
            {
                ans = 0;
                sum++;
            }
            else
            {
            }
        }
    }
    if(ans==1)
        sum++;
    if(sum <= k)
    {
        cout<<0<<endl;
        return ;
    }


    long long l,r,mid;
    l = 1;
    r = 1e9;
    while(l < r)
    {
        mid = (l+r )>>1;
        if(check(mid))
        {
            ans = mid;
            r = mid-1;
        }
        else
            l = mid+1;
    }
    cout<<ans<<endl;
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