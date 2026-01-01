//
// Created by ZA on 2024/9/9.
//
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
    long long a,b;
    cin>>a;
    string l;
    string r;
    int t;
    while(a > 0)
    {
        t = a % 2;
        if(r.size() == 16)
        {
            l.push_back(t + '0');
        }
        else
            r.push_back(t + '0');
        a = a / 2;
    }//l+r
    while(r.size()!=16)
    {
        r.push_back('0');
    }
    while(l.size()!=16)
    {
        l.push_back('0');
    }
    b =0;
    reverse(l.begin(),l.end());
    reverse(r.begin(),r.end());
    string c;
    c.append(r);
    c.append(l);
    reverse(c.begin(),c.end());
    for(int i = 0;i < c.size();i++)
    {
        b += pow(2,i)*(c[i]-'0');
    }
    cout<<b;
}