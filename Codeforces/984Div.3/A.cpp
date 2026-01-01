#include <bits/stdc++.h>
using namespace std;
int a[52];
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
        int ans  = 0;
        for(int i = 1; i <n;i++)
        {
            if(abs(a[i-1] - a[i] )== 7 || abs(a[i-1] - a[i] )== 5  )
            {
                ans=  1;
            }
            else
            {
                ans = 0;
                break;
            }
        }
        if(ans == 1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}