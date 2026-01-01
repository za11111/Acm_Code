//
// Created by ZA on 2025/3/16.
//
#include <bits/stdc++.h>
using namespace std;
int a[103];
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i =0 ;i < n;i++)
        {
            cin>>a[i];

        }
        int fmax= 0;
        int fmin = 1e9;
        for(int i =0 ;i < n;i++) {
            fmax = max(a[i],fmax);
            fmin = min (a[i],fmin);
        }
        cout<<fmax - fmin<<endl;
    }
    return 0;

}
