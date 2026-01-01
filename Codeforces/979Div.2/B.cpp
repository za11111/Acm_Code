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
        for(i =0 ;i < n;i++)
        {
            if(i!=n-1)
            cout<<0;
            else
            cout<<1;
        }
        cout<<endl;
    }
}