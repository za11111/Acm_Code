#include <bits/stdc++.h>
using namespace std;

long long a[200003];
long long ans[200003];
int main ()
{
    int t;
    cin>>t;
    long long test = 2e5;
    for(long long i =1; i <= test;i++)
    {
        long long ii = i;
        long long bns = 0;
        while(ii >0)
        {
            bns += ii%10;
            ii=ii/10;
        }
        a[i] += a[i-1]+bns;
    }
    while(t--)
    {
        int n;
        cin>>n;
        cout<<a[n]<<endl;
    }
}