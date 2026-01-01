#include <bits/stdc++.h>

using namespace std;
int a[200003];
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i = 0;i < n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int x= 1e9;
        for(int i = 1;i < n;i++)
        {
            x = min(a[i]-a[0],x);
        }
        cout<<fmax(x,a[0])<<endl;

    }

}
