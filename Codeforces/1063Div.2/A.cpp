
#include <bits/stdc++.h>
int a[103];
using namespace  std;
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
        int ans = 0;
        for(int i = 0;i < n-1;i++)
        {
            if(i%2==1)
            {
                if(a[i] != a[i+1])
                {
                    ans = 1;
                    break;
                }
            }
        }
            if(ans == 0)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }

    }
}
