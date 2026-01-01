#include<bits/stdc++.h>

using namespace std;
#define int long long
int a[100003];

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k;
        cin>>k;
        int now = 0;
        for(int i = 0;i < n;i++)
        {
            cin>>a[i];
            a[i]++;
        }
        now  = a[k-1];
        sort(a,a+n);
        int time = -1;
        int bns = 0;
        int cns = 1;
        for(int i  =0;i < n;i++)
        {
            if(a[i] == now&&cns == 1)
            {
                cns = 0;
                time = 1;
            }
            else if(time >=0)
            {
                if(now-time >= a[i]-now)
                {
                    time+=a[i]-now;
                    now = a[i];
                }
                else
                {
                    bns = 1;
                    break;
                }
            }
        }
        if(bns != 1)
        {
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
    }
}
/*
5
5 1
6 2 3 4 1
5 2
6 2 3 4 1
5 3
6 2 3 4 1
5 4
6 2 3 4 1
5 5
6 2 3 4 16
 */