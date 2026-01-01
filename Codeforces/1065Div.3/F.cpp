
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
        vector<pair<int,int>> vt;
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
                        vt.push_back({a[i],pr.top()});
                        while(!wait.empty())
                        {
                            pr.push(wait.front());
                            vt.push_back({a[i],wait.front()});
                            wait.pop();
                        }
                    }
                    else
                    {
                        vt.push_back({a[i],pr.top()});
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
                    vt.push_back({a[i],n});
                }

            }

        }

        if(wa == 0)
        {
            cout<<"Yes\n";
            for(auto&[k,v]:vt)
            {
                cout<<k<<' '<<v<<endl;
            }
        }
        else
            cout<<"No\n";

    }
}
