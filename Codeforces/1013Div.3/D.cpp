#include <bits/stdc++.h>

using namespace std;
long long n,m,k;
long long check(long long mid)
{
    long long sum = 0;
    if(m == mid)
        return 1;
    sum = n* m - m/(mid+1)*n;
    if(sum>= k)
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

        cin>>n>>m>>k;
        int l = 1;
        long long ans =0;
        long long r = m;
        long long mid;
        while(l <= r)
        {
            mid = l+r >> 1;
            if(check(mid))
            {
                ans = mid;
                r = mid -1;
            }
            else
                l = mid+1;
        }
        cout<<ans<<endl;
    }
}