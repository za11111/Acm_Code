#include <bits/stdc++.h>
using namespace std;
int a[103];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,l,r;
        cin>>n>>l>>r;
        int x=1;
        for(int i =1;i <l;i++)
        {
            cout<<x<<' ';
            x++;
        }
        if((l-r+1)%2==0)
        {
            for(int i = l;i <= r;i++)
            {
                cout<<1;
            }
            for(int i = r+1;i <= n;i++)
            {
                cout<<x<<' ';
                x++;
            }
        }
        else
        {
            for(int i = l;i <= r;i++)
            {
                if(i == l)
                {
                    cout<<1<<' ';
                }
                else if(i == l+1)
                {
                    cout<<2<<' ';
                }
                else
                {
                    cout<<3<<' ';
                }
            }
            x = max(x,4);
            for(int i = r+1;i <= n;i++)
            {
                cout<<x<<' ';
                x++;
            }
        }
        cout<<endl;
    }
}