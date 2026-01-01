//
// Created by ZA on 2024/8/31.
//
#include <bits/stdc++.h>

using namespace std;
int a[105];
int ans[105];
int gcd(int a,int b)
{
    return b?gcd(b,a%b):a;
}
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int i;
    for(i = 0;i < n;i++)
    {
        cin>>a[i];
    }
    sort(a,a + n);
    int j = 0;
    ans[0] = a[1] - a[0];
    for(i = 1;i < n;i++)
    {
        ans[j] = a[i] - a[i - 1];
        j++;
    }
    int d = ans[0];
    for(i = 0;i < j;i++)
    {
        d = gcd(d,ans[i]);
    }
    for(i=2;i*i<=d;i++)
    {
        if(d%i ==0)
        {
            cout<<i<<"\n";
            if(i * i != d)
            {
                cout<<d/i<<endl;
            }
        }
    }
    cout<<d;
}
