#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        long long  x, y;
        cin >> n >> x >> y;

        string s;
        cin >> s;
        s = '.'+s;

        long long  p[n+1];
        for (int i = 1; i <= n; i++) cin >> p[i];

        if (accumulate(p+1, p+n+1, 0LL) > x+y) {
            cout << "NO\n";
            continue;
        }

        if (s == "." + string(n, '0') || s == "." + string(n, '1')) {
            if (s == "." + string(n, '1')) {
                swap(x, y);
            }

            long long x_need = 0;
            for (int i = 1; i <= n; i++) {
                x_need += p[i]/2 + 1;
            }

            if (x < x_need || x < y+n) {
                cout << "NO\n";
            } else {
                cout << "YES\n";
            }

            continue;
        }

        long long  x_need = 0, y_need = 0;
        for (int i = 1; i <= n; i++) {
            if (s[i] == '0') {
                x_need += p[i]/2 + 1;
            } else {
                y_need += p[i]/2 + 1;
            }
        }
        if (x >= x_need && y >= y_need) cout << "YES\n";
        else cout << "NO\n";


    }

}


/*
1
2 4 7
11
3 1
YES
*/


/*
1
5 9 3
10010
2 1 3 3 2
NO
*/