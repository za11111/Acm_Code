//
// Created by ZA on 2025/9/17.
//
#include <bits/stdc++.h>

using namespace  std;
int a[103];
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i = 1;i <= n;i++)
        {
            cin>>a[i];
        }

        int tt = 1;
        for(int i =1;i <= n;i++)
        {
            if(a[i] == n)
            {
                tt = i;
                break;
            }
        }
        int l,r;
        l = r = tt;
        l--;
        r++;
        int bns = 0;
        int hh = n-1;
        while(hh >= 1)
        {
            if(a[l] == hh)
            {
                l--;
            }
            else if(a[r] == hh)
            {
                r++;
            }
            else
            {
                bns= 1;
                break;
            }
            hh--;
        }
        if(bns == 1)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
}