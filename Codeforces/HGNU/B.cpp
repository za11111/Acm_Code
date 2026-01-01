#include <bits/stdc++.h>

using namespace std;
int a[1003];
int b[1003];
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
        for(int i =1; i < n;i++)
        {
            b[i] = a[i] - a[i-1];
        }
        int fm = INT_MAX;
        int ans =0;
        for(int i =1;i < n;i++)
        {
            if(b[i] > 0)
            {
                ans +=b[i];
            }
            else
            {
                fm = max(b[i],fm);
            }

        }

    }

}