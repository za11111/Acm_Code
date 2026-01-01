
#include <bits/stdc++.h>
using namespace  std;
long long a[200003];
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long fmax = 0;
        for(int i = 0 ;i < n;i++)
        {
            cin>>a[i];

            
        }
        if(n ==2)
        {
            cout<<max(a[0],a[1])<<endl;
            continue;
        }
        int j = 0;
        for(int i = 0;i < n;i++)
        {
            if(a[i] == fmax)
            {
                j = i;
                break;
            }
        }
        long long ans = 0;
        fmax = 0;
        for(int i = j+ 1;i < n+j;i++)
        {
            if(a[i%n]  <= a[(i+1)%n])
            {
                ans+=a[(i+1)%n];
            }
            else
            {
                ans+=a[i%n];
                fmax = max(a[i%n],fmax);
            }
        }
        cout<<ans<<endl;
    }
}
