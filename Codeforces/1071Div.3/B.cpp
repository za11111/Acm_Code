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
        long long x = 0;
        for(int i =0; i < n-1;i++)
        {
            x+=abs(a[i+1]-a[i]);
        }
        long long fmin = x;
        for(int i = 0;i < n;i++)
        {
            if(i == 0)
                fmin = min (fmin,x-abs(a[i+1]-a[i]));
            else if(i == n-1)
            {
                fmin = min(fmin,x-abs(a[i]-a[i-1]));
            }
            else
            {
                fmin = min(fmin,x-abs(a[i]-a[i-1])-abs(a[i+1]-a[i])+abs(a[i+1]-a[i-1]));

            }

        }
        cout<<fmin<<endl;
    }

}