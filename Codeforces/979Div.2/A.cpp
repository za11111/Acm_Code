#include <bits/stdc++.h>
int a[1003];
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i;

        for(i = 0;i < n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int fmax =a[n-1];
        int fmin = a[0];
            cout<<(fmax-fmin)*(n-1)<<endl;
    }
}