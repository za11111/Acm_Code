#include <bits/stdc++.h>

using namespace std;
int a[200003][2];
long long n,k;
long long ans;
long long check(long long mid)
{
    long long ttt = (2*k+mid)*(mid+1)-(2*k+n-1)*n/2;
    return ttt;
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        //long long n,k;
        cin>>n>>k;
        int l,r;
        l = 0;
        r = n-1;
        ans = 0;
        while (l<=r)
        {
            long long mid=(l+r)/2;
            if (check(mid) >=0)
            {
                ans = mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        if(ans == 0)
            cout<<check(ans)<<endl;
        else {
            cout<<min(check(ans), abs(check((ans-1))) )<<endl;
        }
    }
}
