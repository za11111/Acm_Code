//
// Created by ZA on 2025/5/24.
//
#include <bits/stdc++.h>

using namespace  std;

int a[53];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i =0;i < n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        if((a[n-1]+a[0]) % 2==0)
        {
            cout<<0<<endl;
            continue;
        }
        else
        {
            int fmin = 1e9;
            for(int i = 1;i < n;i++)
            {
                if((a[i]+a[n-1]) % 2==0)
                {
                    fmin = min(fmin,i);
                    break;
                }
            }
            for(int i = n-2;i >=0;i--)
            {
                if((a[i]+a[0]) % 2==0)
                {
                    fmin = min(fmin,n-i-1);
                    break;
                }
            }
            cout<<fmin<<endl;
        }
    }
}