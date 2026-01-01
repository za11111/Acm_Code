//
// Created by ZA on 2024/9/21.
//
//
// Created by ZA on 2024/9/21.
//
#include <bits/stdc++.h>

using namespace std;
int a[200003];
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i;
        long long sum  =0;
        for(i = 0;i < n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        sort(a,a+n);
        if(n==1||n==2)
        {
            cout<<-1<<endl;
            continue;
        }
        int tt=n/2;
        double test = sum*1.0/n/2;
        double ts=a[tt];
        if(test > ts)
        {//1  8 20 //49/6
            cout<<0<<endl;
            continue;
        }
        long long ans = 0;
        long long obj;
        obj = a[tt];
        obj = obj*2*n;
        ans = obj-sum+1;
        cout<<ans<<endl;
    }
}//