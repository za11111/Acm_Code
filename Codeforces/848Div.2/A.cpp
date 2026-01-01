//
// Created by yjh on 2025/11/14.
//
#include <bits/stdc++.h>

using namespace std;

long long a[100003];
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long fmax = -1e9;
        long long ans = 0;
        for(int i = 0;i < n;i++)
        {
            cin>>a[i];
            ans += a[i];
        }
        for(int  i= 1;i < n;i++)
        {
            fmax = max(fmax,(-a[i]-a[i-1])-(a[i]+a[i-1]));
        }

        cout<<fmax + ans<<endl;
    }
}