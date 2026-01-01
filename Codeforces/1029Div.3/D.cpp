#include <bits/stdc++.h>

using namespace std;
//#define  int long long
int t;
int n;
long long  a[200003];
signed main()
{
    cin >> t;
    while(t--)
    {
        cin>>n;
        for(int i = 0;i < n;i++)
        {
            cin>>a[i];
        }
        int bns = 0;
        long long  sum = a[1]-a[0];
        for(int i= 2;i < n;i++)
        {
            if(a[i] -a[i-1] != sum)
            {
                bns =  1;
                break;
            }
        }
        if(bns == 1)
        {
            cout<<"NO\n";
            continue;
        }
        for(int i = 0;i < n;i++)
        {
            if(sum >0)
                a[i] -=sum*(i+1);
            else
                a[i] -=sum*-1*(n-i);
        }
        for(int i = 0;i < n;i++)
        {
            if(a[i] <0)
            {
                bns = 1;
                break;
            }
            else if(i==n-1)
            {
                if(a[i]%(n+1) ==0)
                {}
                else
                    bns = 1;
            }

            else if(a[i]%(n+1) ==0&&a[i]==a[i+1])
            {}
            else
                bns = 1;
        }
        if(bns == 1)
        {
            cout<<"NO\n";
            continue;
        }
        else
            cout<<"YES\n";
    }
}