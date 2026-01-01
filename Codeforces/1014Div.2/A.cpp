#include <bits/stdc++.h>

using namespace std;
long long a[103];

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i =0;i < n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        cout<<a[n-1]-a[0]<<endl;
    }
}