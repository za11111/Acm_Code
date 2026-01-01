//
// Created by ZA on 2024/10/11.
//
#include <bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        vector<long long> a;
        vector<long long> b;
        int n;
        cin >> n;
        int i;
        long long fmax;
        for (i = 0; i < n; i++) {
            long long tt;
            cin >> tt;
            a.push_back(tt);
        }
        sort(a.begin(),a.end());
        long long sum ;
        sum = a[0]+a[1];
        sum =sum/ 2;
        for(i = 2;i < n;i++)
        {
            sum =  (a[i] +sum)/2;
        }
        cout<<sum<<endl;
    }
}
