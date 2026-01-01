//
// Created by ZA on 2024/9/10.
//
//
// Created by ZA on 2024/9/10.
//
#include <bits/stdc++.h>
using namespace std;
unordered_map<int,int> h;
unordered_map<int,int> l;
inline int read() {//????,??TLE
    char ch = getchar(); int x = 0, f = 1;
    while(ch < '0' || ch > '9')
    {
        if(ch == '-') f = -1;
        ch = getchar();
    }
    while('0' <= ch && ch <= '9')
    {
        x = x * 10 + ch - '0';
        ch = getchar();
    } return x * f;
}
int main ()
{
    ios::sync_with_stdio;
    cin.tie(0);
    cout.tie(0);

    int n,k;
    n=read();
    k=read();
    int i,j;
    int a,b;
    for(i = 0;i < k;i++)
    {
        a=read();
        b=read();
        h[a]++;
        l[b]++;
    }
    long long ans = n*h.size()+(n-h.size())*l.size();
    cout<<ans;
    return 0;
}