//
// Created by ZA on 2024/9/9.
//
#include <bits/stdc++.h>
using namespace std;


int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    long long x,y;
    cin>>x;
    int i;
    for(i = 1;i < n;i++)
    {
        cin>>y;
        x = x^y;
    }
    cout<<x;
}