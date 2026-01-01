#include <bits/stdc++.h>
using namespace std;
int a[1003];
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i =0 ;i < n;i++)
        {
            cin>>a[i];
        }
        cout<<(1+(n-1))*(n-1)/2<<endl;
    }
}