#include <bits/stdc++.h>

using namespace std;
long long a[51];
int main ()
{
    int n;
    cin>>n;
    int i;
    double sum  =0;
    for(i = 0;i < n;i++)
    {long long tt;
        cin>>tt;
        sum+=log(tt)/log(2024);
    }
    i = 1;
    long long ttt = 0;
    while(sum > ttt)
    {
        ttt+=log(i)/log(2024);
        i++;
    }
    cout<<ttt;
}