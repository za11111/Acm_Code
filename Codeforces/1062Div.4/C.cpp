
#include <bits/stdc++.h>

using namespace  std;
int a[200003];
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans = 0;
        for(int i =0;i < n;i++)
        {
            cin>>a[i];
            if(a[i] %2 == 0)
                ans++;
        }
        if(ans == n||ans == 0)
        {

        }
        else
        {
            sort(a,a+n);
        }
        for(int i =0;i < n;i++)
        {
            cout<<a[i]<<' ';
        }
        cout<<endl;
    }
}