#include <bits/stdc++.h>
using namespace  std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,y;
        cin>>n>>y;
        long long sum  =0;
        long long tt = y;
        int ans = 0;
        while(tt> 0)
        {
            if(tt%2!=0)
            {
                ans++;
            }
            tt = tt/2;
        }
        if(y == 1)
        {
            if(n==1)
            {
                cout<<1<<endl;
            }
            else if(n%2==0)
            {
                cout<<5+(n-2)<<endl;
            }
            else
            {
                cout<<n<<endl;
            }
            continue;
        }
        else if(ans ==0)
        {
            if(n==1)
            {
                cout<<-1<<endl;
                continue;
            }
            else if(n%2==0)
            {
                cout<<n<<endl;
            }
            else
            {
                cout<<(n-3) + 6<<endl;
            }
            continue;
        }
        if(ans >=n)
        {
            cout<<y<<endl;
            continue;
        }
        else
        {
            long long cha =(n-ans+2-1)/2;
            cout<<cha*2+y<<endl;

        }
    }
}