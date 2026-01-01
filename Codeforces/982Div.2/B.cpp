//
// Created by ZA on 2024/10/26.
//
#include <bits/stdc++.h>
using namespace  std;

vector<long long >a;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        a.clear();
        int n;
        cin>>n;
        int i;
        long long tt;
        for(i = 0;i < n;i++)
        {
            cin>>tt;
                a.push_back(tt);
        }
        long long k  =LONG_LONG_MAX;
        for(i =0 ;i < n;i++)
        {
            long long s = i;
            for(int j = i+1;j < n;j++)
            {
                if(a[j]>a[i])
                {
                    s++;
                }
            }
            k = min(k,s);
        }
        cout<<k<<endl;
    }
}
