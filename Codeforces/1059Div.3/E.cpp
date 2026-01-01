#include <bits/stdc++.h>

using namespace std;
int a[200003];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int fmax= 0 ;
        for(int i =0;i < n;i++)
        {
            cin>>a[i];
        }
        for(int i = 0;i < n;i++)
        {
            if(i %2 == 1)
            {
                if(a[i] > fmax)
                {
                    fmax = a[i];
                }
                else
                {
                    a[i] = fmax;
                }
            }
            else
                fmax = max(fmax,a[i]);

        }
        long long ans =0;
        for(int i =0;i < n;i+=2)
        {
            if(i == 0)
            {
                ans += max(0,a[i]-a[i+1]+1);
            }
            else if(i+1 == n)
            {
                ans+=max(0,a[i]-a[i-1]+1);
            }
            else
            {
                int hh = min(a[i-1],a[i+1]);
                ans+=max(0,a[i]-hh+1);
            }
        }
        cout<<ans<<endl;
    }
}