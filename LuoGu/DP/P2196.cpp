#include <bits/stdc++.h>
using namespace std;
int dp[1002];
int lq[1002][1002];
int a[102];
int q[102];
void dfs(int x)
{
    if(q[x] )
    {
        dfs(q[x]);
    }
    cout<<x<<" ";
}
int main () {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n - 1; i++) {
        for (int j = 1; j <= n - i; j++) {
            cin >> lq[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        dp[i] = a[i];
    }
    int index = 0;
    int fmax = 0;
    for (int i = 1; i <= n - 1; i++) {

        for (int j = 1; j <= n - i; j++) {
            if (lq[i][j] == 1) {
                if (dp[i] + a[i + j] > dp[i + j]) {
                    dp[i + j] = dp[i] + a[i + j];
                    q[i + j] = i;
                }
                if (fmax < dp[i + j]) {q
                    fmax = dp[i + j];
                    index = i + j;
                }
            }
        }
    }
    dfs(index);
    cout << endl;
    cout << fmax;
}
