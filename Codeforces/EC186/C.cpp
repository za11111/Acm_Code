//
// Created by ZA on 2025/12/29.
//
#include <bits/stdc++.h>

using namespace std;
long long a[15003];
long long b[15003];
long long c[15003];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i =0;i < n;i++)
        {
            cin>>a[i];
        }
        for(int i =0;i < n;i++)
        {
            cin>>b[i];
        }
        for(int i =0;i < n;i++)
        {
            cin>>c[i];
        }
        int sum1 = 0;
        int sum2 = 0;
        for(int i = 0;i < n;i++)
        {
            int ans = 0;
            for(int j = 0;j < n;j++)
            {
                if(a[(0+j)%n] < b[(i+j)%n])
                {
                    continue;
                }
                else
                {
                    ans = 1;
                    break;
                }
            }
            if(ans == 0)
                sum1++;
        }

        for(int i = 0;i < n;i++)
        {
            int ans = 0;
            for(int j = 0;j < n;j++)
            {
                if(c[(0+j)%n] > b[(i+j)%n])
                {
                    continue;
                }
                else
                {
                    ans = 1;
                    break;
                }
            }
            if(ans == 0)
                sum2++;
        }
        cout<<sum1*sum2<<endl;
    }
}
//0 1  1 1
//k = b