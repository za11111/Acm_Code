//
// Created by ZA on 2024/10/14.
//
#include <bits/stdc++.h>

using namespace std;
int a[500003];
int cmp(int x,int y)
{
    return x > y;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x;
        cin>>x;
        int i;
        long long sum = 0;
        long long fmax= 0;
        for( i= 0;i < n;i++)
        {
            cin>>a[i];
            sum+=a[i];
            if(a[i] > fmax)
                fmax = a[i];
        }
        if(sum%x == 0)
        {
            sum = sum / x;
        }
        else {
            sum = sum / x + 1
        }

        cout<<max(fmax,sum)<<endl;

    }
}

