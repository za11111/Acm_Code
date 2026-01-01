
#include <bits/stdc++.h>
using namespace  std;
int a[200003];
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int pre,rear;
        pre = rear = 0;
        long long ans = 0;
        long long now = -1;
        for(int i = 0;i < n;i++)
        {
            cin>>a[i];
            if(a[i] == -1)
            {
                if(i==0)
                    pre= 1;
                else if(i==n-1)
                    rear = 1;
            }
        }
        if(pre==1&&rear == 1)
        {
            cout<<0<<endl;
            for(int i = 0;i < n;i++)
            {
                if(a[i] == -1)
                    cout<<0<<' ';
                else
                    cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else if(pre == 1)
        {
            cout<<0<<endl;
            cout<<a[n-1]<<" ";
            for(int i = 1;i < n;i++)
            {
                if(a[i] == -1)
                    cout<<0<<' ';
                else
                    cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else if(rear == 1)
        {
            cout<<0<<endl;
            for(int i = 0;i < n-1;i++)
            {
                if(a[i] == -1)
                    cout<<0<<' ';
                else
                    cout<<a[i]<<" ";
            }
            cout<<a[0]<<endl;
        }
        else
        {
            cout<<abs(a[n-1]-a[0])<<endl;
            for(int i = 0;i < n;i++)
            {
                if(a[i] == -1)
                    cout<<0<<' ';
                else
                    cout<<a[i]<<" ";
            }
            cout<<endl;
        }

    }
}
