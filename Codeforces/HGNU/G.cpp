#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin >> n;
        int a, b;
        a = n / 10;
        b = n % 10;
        if (b >= 6)
            a++;
        cout << a << endl;
    }
}