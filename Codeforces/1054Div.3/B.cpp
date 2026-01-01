//
// Created by ZA on 2025/9/21.
//
#include <bits/stdc++.h>

using namespace std;
long long a[200003];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i =0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        long long fmin = -1e18;
        for(int i = 0;i < n;i+=2)
        {
            fmin = max(fmin,abs(a[i]-a[i+1]));
        }
        cout<<fmin<<endl;

    }

}