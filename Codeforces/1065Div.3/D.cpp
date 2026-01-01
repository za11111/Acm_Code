
#include <bits/stdc++.h>
using namespace  std;
int a[200003];
int b[200003];
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        priority_queue<int,vector<int>,greater<int>> pr;
        queue<int > wait;
        int wa = 0;
        for(int i = 1;i <= n;i++)
        {
            cin>>a[i];
        }
        int bns =0 ;
        for(int i =1;i<=n;i++)
        {
            if(bns==1)
            {
                if(a[i] >pr.top())
                {
                    pr.push(a[i]);
                    if(wa==1)
                    {
                        wa=0;
                        while(!wait.empty())
                        {
                            pr.push(wait.front());
                            wait.pop();
                        }
                    }
                }
                else
                {
                    wa=1;
                    wait.push(a[i]);
                }
            }
            else
            {
                if(a[i]==n)
                {
                    pr.push(a[i]);
                    bns= 1;
                }
                else{
                    pr.push(a[i]);
                }
            }

        }

        if(wa == 0)
            cout<<"Yes\n";
        else
            cout<<"No\n";

    }
}
