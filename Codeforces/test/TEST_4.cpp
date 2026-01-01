#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

#define Yes cout << "Yes\n"
#define No cout << "No\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define FOR(i, x, y) for (int i=(x);i<=((int)y);++i)
#define fori(x, y) FOR(i, x, y)
#define forj(x, y) FOR(j, x, y)
#define fork(x, y) FOR(k, x, y)

#define debug(x) cerr << #x << " = " << (x) << endl

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const ll MOD = 998244353;
ll qpow(ll a,ll p) {ll res=1; while(p) {if (p&1) {res=res*a%MOD;} a=a*a%MOD; p>>=1;} return res;}

void solve() {
    for(int ca = 1;ca <= 100;ca++)
    {
        int n;
        n = ca;
        if (n <= 3) {
            cout << n << endl;
            fori(1, n) cout << i << " ";
            cout<<endl;
            continue;
        }
        if (n == 4) {
            cout << 0 << endl;
            continue;
        }

        deque<int> rem;
        int c = 1;
        while (n > 10000) {
            while (n%5) {
                rem.push_front(n*c);
                n--;
            }
            n /= 5;
            c *= 5;
            // for (auto u: rem) cout << u << " ";
            // cout << endl;
            if (rem.size()>=4) fori(1, 4) rem.pop_front();
        }

        for (int i=n;i>=1;--i) rem.push_front(i*c);
        while (rem.size()>=4) {
            deque<int> tmp;
            fori(0, rem.size()-1) if (i%5 == 4) tmp.push_back(rem[i]);
            if (rem.size()%5 <= 3) fori(rem.size()/5*5, rem.size()-1) tmp.push_back(rem[i]);
            swap(tmp, rem);
        }

        cout << rem.size() << endl;
        for (auto u: rem) cout << u << " ";
        cout<<endl;
    }

}

signed main() {
    IOS;
    int t = 1;
    // cin >> t;
    while (t--) {

        solve();
    }
    return 0;
}
