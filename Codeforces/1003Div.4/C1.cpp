#include <bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
using u128 = unsigned __int128;

constexpr int inf = 1E9 + 1;

void solve() {
    int n, m;
    std::cin >> n >> m;

    std::vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        std::cin >> b[i];
    }
    //std::sort(b.begin(), b.end());

    int lst = -inf;
    for (int i = 0; i < n; i++) {
        int x = inf;
        if (a[i] >= lst) {
            x = a[i];
        }
        //auto it = std::lower_bound(b.begin(), b.end(), lst + a[i]);
        if (b[0] >=lst+a[i]) {
            x = std::min(x, b[0] - a[i]);
        }
        if (x == inf) {
            std::cout << "NO\n";
            return;
        }
        lst = x;
    }
    std::cout << "YES\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}