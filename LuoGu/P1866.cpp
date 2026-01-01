//
// Created by ZA on 2024/9/9.
//
//
// Created by ZA on 2024/9/9.
//
#include <bits/stdc++.h>
using namespace std;
long long mod  = 1e9+7;
int a[51];
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    long long m;
    for(int i = 0;i < n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int ans = 0;//4 7 7
    m = a[0];
    int bns = 0;
    for(int i = 1;i < n;i++)
    {
        m = m*(a[i] - 1-ans)%mod;
        if(m < 0)
        {
            bns = 1;
            break;
        }
        ans++;
    }
    if(bns)
        cout<<0;
    else
    cout<<m;
}//K4 M3 E4 Y3 O3 N2 A1 81 U1 C1