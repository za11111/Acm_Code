#include <bits/stdc++.h>

using namespace std;
long long a[200003];
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long  n,x;
        cin>>n>>x;
        for(int i =0 ;i < n;i++)
        {
            cin>>a[i];

        }

        sort(a,a+n);
        long long now = 0;
        long long ren = 1;
        long long sum = 0;
        long long ans = 0;
        long long fmin = a[n-1];
        for(int i = n-1;i >=0;i--)
        {
            fmin = min(a[i],fmin);
            sum = fmin*ren;
            if(sum >= x )
            {
                ans++;
                sum = 0;
                ren = 1;
                fmin = 1e9;
            }
            else
            {
                ren++;
            }
        }
        cout<<ans<<endl;

    }
}