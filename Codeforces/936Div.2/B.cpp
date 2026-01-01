#include <bits/stdc++.h>

using namespace std;
long long mod = 1e9+7;
long long a[100003];


int main ()
{
    int t;
    cin>>t;

    while (t--)
    {
        long long q = 0;
        int n,k;
        cin>>n>>k;
        int i;
        for(i = 0;i < n;i++)
        {
            cin>>a[i];
            q+=a[i];
        }
        long long ans = 0;
        for(i = n-1;i >=0;i--)
        {
            if(a[i] >=0 )
                ans+=a[i];
            else
                break;
        }
        long long sum = a[0];
        long long fmax= 0;
        fmax= a[0];
        for(i =1 ; i<  n;i++)
        {
            if(sum + a[i]>=0)
            {
                sum +=a[i];
                fmax = max(fmax,sum);
            }
            else
            {
                sum = 0;
            }

        }
        long long aaa = fmax;
        if(fmax < 0)
        {
            cout<<q+ mod<<endl;
            continue;
        }
        if(k==1)
        {
            cout<<q + fmax<<endl;
            continue;
        }
        if(k == 2)
        {
            cout<<q + fmax + fmax + ans<<endl;
            continue;
        }
        else {
            q += fmax + ans + fmax;
            for (i = 2; i < k; i++) {
                aaa  = (ans + fmax) * 2;
                q +=aaa;
            }
        }
        aaa = q;
        if(aaa < 0)
        {
            aaa+=mod;
        }
        else
        {
            aaa%=mod;
        }
        cout<<aaa<<endl;
    }
}