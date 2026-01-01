#include <bits/stdc++.h>

using namespace std;
long long a[100003];
long long b[100003];
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i = 1;i <= n;i++)
        {
            cin>>a[i];
        }
        for(int i = 1;i <= n;i++)
        {
            cin>>b[i];
        }
        long long ans =0;
        long long fmax,fmin;
        fmax = max(-a[1],b[1]);
        fmin = min(-a[1],b[1]);
        for(int i =2 ;i <= n;i++)
        {
            long long s1 =fmax;
            fmax = max(fmax-a[i],b[i]-fmin);
            fmin = min(fmin-a[i],b[i]-s1);
        }
        cout<<fmax<<endl;
    }

}