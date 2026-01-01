#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long k;
        cin>>k;
        long long sum1 = (int)sqrt(k);
        if(sum1 + k >= (sum1+1)*(sum1+1))
        {
            cout<<k+sum1+1<<"\n";
        }
        else
        {
            cout<<k+sum1<<"\n";
        }
    }
}