#include <bits/stdc++.h>
#define int long long
#define all(a) a.begin(), a.end()
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    // Reading the array elements
    for (auto &element : arr)
        cin >> element;

    // Find the maximum element in the array
    int maxElement = LLONG_MIN;
    for (auto x : arr)
        maxElement = max(maxElement, x);

    // Calculate the total sum of the array
    int totalSum = accumulate(all(arr), 0LL);

    // Iterate from n downwards to find the largest valid i
    for (int i = n; i > 0; i--) {
        int quotient = (totalSum + k) / i;

        // Check conditions to continue
        if (quotient * i <= totalSum - 1)
            continue;
        if (quotient <= maxElement - 1)
            continue;

        // Print the result and exit
        cout << i << endl;
        return;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int testCases;
    cin >> testCases;

    // Running for all test cases
    while (testCases--)
        solve();

    return 0;
}
