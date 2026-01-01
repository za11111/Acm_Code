#include <bits/stdc++.h>

using namespace std;
long long a[103];
int is(long long x)
{
    if(x==1)
        return 0;
    for(int i =2;i*i <= x;i++)
    {
        if(x%i==0)
            return 0;
    }
    return 1;
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,k;
        cin>>x>>k;
        if(x==1)
        {
            long long ans = 1;
            for(int i =1;i<=k-1;i++)
            {
                ans=ans*10+1;
            }
            //cout<<ans<<endl;
            if(is(ans) ==1)
            {
               cout<<"YES\n";
            }
            else
                cout<<"NO\n";
            continue;
        }
        else if(k==1)
        {
            if (is(x) == 1)
            {
                cout << "YES\n";
            }
            else
                cout << "NO\n";
        }
        else
            cout<<"NO\n";
    }

}
//525252
//10101
//10000010000001