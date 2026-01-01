#include <bits/stdc++.h>

using namespace std;

int t;
int n;
int a[200003];
int main()
{
    cin >> t;
    while(t--)
    {
        cin>>n;
        for(int i = 0;i < n;i++)
        {
            cin>>a[i];
        }
        if(n == 2)
        {
            if(max(a[0],a[1]) > min(a[0],a[1]))
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else
        {
            int bns = 0;
            int tt = a[1]-a[0];
            for(int i = 2 ;i  < n;i++)
            {
                if(a[i]-a[i-1] ==tt)
                {}
                else
                {
                    bns =1;
                    break;
                }

            }
            if(bns )
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }
    }
}