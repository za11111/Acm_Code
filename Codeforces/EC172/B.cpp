#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[1003];
        memset(a,0,sizeof (a));
        int n;
        cin>>n;
        for(int i =0;i < n;i++)
        {
            int tt;
            cin>>tt;
            a[tt]++;
        }
        int ans =0;
        sort(a,a+n);
        int zhonglei =0;
        for(int i =1;i <= n;i++)
        {
            if(a[i] == 1)
            {
                ans++;
            }
            if(a[i] !=0)
            {
                zhonglei++;
            }

        }
        if(ans % 2==0)
        {
            cout<<ans+(zhonglei -ans);
        }
        else
        {
            cout<<ans/2*2+2+(zhonglei -ans);
        }
        cout<<endl;
    }
}