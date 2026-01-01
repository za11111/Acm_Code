#include<bits/stdc++.h>

using namespace std;
int a[100003];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k;
        cin>>k;
        for(int i = 0;i < n;i++)
        {
            cin>>a[i];
        }
        int sum = 0;
        int ans = 0;
        for(int i =0 ;i < n;i++)
        {
            if(a[i] == 0)
            {
                ans++;
                if(ans == k)
                {
                    ans = 0;
                    sum++;
                    i++;
                }
            }
            else if(a[i] == 1)
            {
                if(ans !=0)
                {
                    ans = 0;
                }
            }
        }
        cout<<sum<<endl;
    }
}