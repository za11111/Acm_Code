#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x;
        cin>>n>>x;

        int tt=  x;
        int ans =0 ;
        int bns = 0;
        while(tt > 0)
        {
            bns++;
            tt =tt/2;

        }
        tt = x;
        while(tt > 0)
        {
            if(tt%2==1)
            {
                ans++;
            }
            else
            {
                break;
            }
            tt =tt/2;

        }
        long long ppow = pow(2,ans);
        long long pppow = pow(2,ans-1);

        if(ans ==0)
        {
            n--;
            cout<<x<<' ';
            for(int i =0;i < n;i++)
            {
                cout<<"0 ";
            }
            cout<<endl;
            continue;
        }
        else if(ans ==bns)
        {
            if(n-1 <pppow)
            {
                n--;
                cout<<x<<' ';
                for(int i =0;i < n;i++)
                {
                    cout<<i<<' ';
                }
                cout<<endl;
            }
            else
            {
                for(int i = 0;i < n;i++)
                {
                    if(i > x)
                    {
                        cout<<'0'<<' ';
                    }
                    else
                        cout<<i<<' ';
                }
                cout<<endl;
            }
        }
        else
        {
            cout<<x<<' ';
            n--;
            for(int i =0;i < n;i++)
            {
                if(i > ppow-1)
                {
                    cout<<'0'<<' ';
                }
                else
                    cout<<i<<' ';
            }
            cout<<endl;
        }

    }
}


