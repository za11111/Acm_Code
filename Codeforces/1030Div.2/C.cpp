#include <bits/stdc++.h>

using namespace std;
unsigned long long a[5003];
unsigned long long power(unsigned long long a, unsigned long long b) {
    unsigned long long res = 1;
    for (; b; b /= 2, a = 1LL * a * a ) {
        if (b % 2) {
            res = 1LL * res * a;
        }
    }
    return res;
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long long n,k;
        cin>>n>>k;
        for(int i =0;i < n;i++)
        {
            cin>>a[i];
        }
        unsigned long long sum = 0;

            for (int j = 0; j <= 62; j++)
            {
                for(int i =0;i<n;i++)
                {
                    sum = a[i];
                    sum >>= j;
                    unsigned long long p = power(2,j);
                    if (sum & 1)
                    {
                    }
                    else
                    {
                        if (k >= p  )
                        {
                            k -= p;
                            a[i] += p;
                        }
                    }
                }
            }

        unsigned long long ans = 0;
        for(int i =0;i < n;i++)
        {
            unsigned long long ss = a[i];
            while(ss>0)
            {
                if(ss&1)
                {
                    ans++;
                }
                ss>>=1;
            }
        }
        cout<<ans<<endl;

    }
}
