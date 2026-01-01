//
// Created by ZA on 2024/9/21.
//
#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
       long long sum;
       sum = 0;
       int j = 0;
       long long i;
       sum = (n+n-k+1)*k/2;
       if(sum%2==0)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
    }
}//