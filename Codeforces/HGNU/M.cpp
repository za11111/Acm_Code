#include <bits/stdc++.h>
using namespace std;
long long a[100003];
long long ans[100003];
long long m = 998244353;

using ll =long long;
ll mul(ll a, ll b, ll p = m) {
    ll res = a * b - ll(1.L * a * b / p) * p;
    res %= p;
    if (res < 0) {
        res += p;
    }
    return res;
}

int main() {
    long long sum = 0;
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    for(int i = 1; i <= n; ++i) {
        ans[i] = ans[i - 1] + a[i];
    }

    for(int i = 2; i <= n; ++i)
    {
        sum = (sum + mul(a[i], mul(i - 1, a[i]) - ans[i - 1])) % m;
    }
    cout << (sum * 2) % m<< endl;
}