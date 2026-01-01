#include <bits/stdc++.h>

using namespace std;
long long a[200003];
long long n,x;
bool check(long long mid)
{
    long long ssum =0;
    long long sum = mid*n;
    for(int i =0;i < n;i++)
    {
        ssum+=min(a[i],mid);
    }
    if(sum - ssum <=x)
    {
        return 1;
    }
    else
        return 0;
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        //long long n,x;
        cin>>n>>x;
        for(int i =0;i < n;i++)
        {
            cin>>a[i];
        }
        long long l,r;
        l =1;
        r =1e10;
        long long ans = 0;
        while(l <=r)
        {
            long long mid = (l+r) / 2;
            if(check(mid))
            {
                ans = mid;
                l = mid+1;
            }
            else
                r = mid-1;
        }
        cout<<ans<<endl;
    }
}
