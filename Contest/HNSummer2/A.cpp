#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long ans = 0;
    long long j = 0;
    for (long long i = 1;i <=n;i = j+1)
    {
        long long q = n / i;
        j = n / q;
        ans += q * (j - i + 1);
    }
    cout<<ans;
    return 0;
}