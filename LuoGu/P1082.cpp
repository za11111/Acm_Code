//
// Created by ZA on 2024/8/29.
//
#include <iostream>
using namespace std;
long long excd(long long a,long long b,long long &x,long long &y)
{
    if(b == 0)
    {
         x = 1;
         y = 0;
        return a;
    }
    long long d = excd(b, a%b,y,x);
    y -= a/b*x;
    return d;
}
int main ()
{
    long long a,b;
    long long y,x;
    cin>>a>>b;
    long long d = excd(a,b,x,y);

    cout<<(x % b + b) %b;
}