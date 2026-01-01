//
// Created by ZA on 2025/9/17.
//
#include <bits/stdc++.h>

using namespace  std;
long long a[200003];
long long b[200003];
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        priority_queue<long long > pr;
        for(int i = 0;i < n;i++)
        {
            cin>>a[i];
            pr.push(a[i]);
        }

        for(int i = 0;i < k;i++)
        {
            cin>>b[i];
        }
        sort(b,b+k);
        long long ans = 0;
        int now = 0;
        while(!pr.empty())
        {
            if(now == k)
            {
                while(!pr.empty())
                {
                    ans+=pr.top();
                    pr.pop();
                }
                if(pr.size() == 0)
                    break;
            }
            else
            {
                long long hh = b[now];

                for(int i = 1;i <= hh-1;i++)
                {
                    if(pr.size() == 0)
                        break;
                    ans += pr.top();
                    pr.pop();
                }
                if(pr.size() == 0)
                    break;
                pr.pop();
                now++;
            }
            if(pr.size() == 0)
                break;

        }
        cout<<ans<<endl;
    }
}