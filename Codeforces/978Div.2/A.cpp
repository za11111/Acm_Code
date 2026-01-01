//
// Created by ZA on 2024/10/14.
//
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[103];
        int n,r;
        cin>>n>>r;
        int i;
        for(i = 0;i < n;i++){
            cin >> a[i];
        }
        int sum =0 ;
        int alone = 0;
        int kong;
        for(i = 0;i < n;i++)
        {
           sum +=a[i] / 2 * 2;
           alone+=a[i]%2;
        }
        kong =r-sum/2;
        if(kong > alone){
            sum+=alone;
        }
        else
        {
            sum+=max(0,kong-(alone-kong));
        }

        cout<<sum<<endl;
    }
}