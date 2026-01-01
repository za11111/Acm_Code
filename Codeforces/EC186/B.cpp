//
// Created by ZA on 2025/12/29.
//
#include <bits/stdc++.h>

using namespace std;
long long f(long long a,long long b)
{
    long long x= 1;
    for(int i =1;i <=100;i++)
    {
        if(i %2 == 1)
        {
            if(a>=x)
                a-=x;
            else
                return i-1;
        }
        else
        {
            if(b >= x)
                b-=x;
            else
                return i-1;
        }
        x =x*2;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        cout<<max(f(a,b),f(b,a))<<endl;
    }
}