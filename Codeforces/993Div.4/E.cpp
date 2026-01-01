#include <bits/stdc++.h>

using namespace std;
long long a[200003];
long long fastpow(long long a,long long b)
{
    long long ans = 1;
    a = a ;
    while(b)
    {
        if(b & 1)
            ans = ans * a;//要乘
        a = a * a ;//递推2 4 8 16
        b = b >> 1;//进位
    }
    return ans;
}
int main ()
{
    int t;
    cin>>t;
    while(t--) {
        //long long n,x;
        long long k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;

        long long sum = 0;
        for (int i = 0; i <= 32; i++) {
            long long ans = fastpow(k, i);
            if (ans > r2)
                break;
            long long l = max(l1, (long long) (ceil(l2 / ans)));
            long long r = min(r1, (long long) floor(r2 / ans));
            if (r - l >= 0)
                sum += r - l + 1;
        }
        cout << sum << endl;
    }
}


