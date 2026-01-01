//
// Created by ZA on 2024/8/29.
//
#include <iostream>

using namespace std;
long long exgcd(long long a,long long b,long long &x,long long &y)
{
    if(b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    long long d = exgcd(b,a%b,y,x);
    y -= a/b*x;
    return d;
}
int main () {
    long long x, y, m, n, l;
    cin >> x >> y >> m >> n>>l;
    long long  c = x - y;
    long long a = n - m;
    if (a < 0) {
        a = -a;
        c = -c;
    }
    long long d = exgcd(a, l, x, y);
    if (c % d != 0)
        cout << "Impossible";
    else
        cout << ((x * (c / d)) % (l / d) + (l / d)) % (l / d);
}