#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        long long n;
        cin>>n;
        long long nn = n;
        int sum = 0;
        while(n > 0)
        {
            n = n/10;
            sum++;
        }
        cout<<nn - (int )pow(10,sum - 1) <<endl;
    }
}