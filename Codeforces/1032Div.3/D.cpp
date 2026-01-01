#include <bits/stdc++.h>

using namespace std;
struct Z
{
    int sum,index;
};


int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        priority_queue<int,vector<int>,greater<int>> qe;
        int a[43];
        int b[43];
        vector<pair<int,int> > pr;
        int n;
        cin>>n;
        for(int i =0;i < n;i++)
        {
            cin>>a[i];
        }
        for(int i = 0;i < n;i++)
        {
            cin>>b[i];
        }
        int ans = 0;
        for(int i = 0; i < n;i++)
        {
            for(int j =1;j < n;j++)
            {
                if(a[j-1] > a[j])
                {
                    ans++;
                    pr.push_back({1,j});
                    int h = a[j];
                    a[j] = a[j-1];
                    a[j-1] = h;
                }
            }
        }


        for(int i = 0; i < n;i++)
        {
            for(int j =1;j < n;j++)
            {
                if(b[j-1] > b[j])
                {
                    ans++;
                    pr.push_back({2,j});
                    int h = b[j];
                    b[j] = b[j-1];
                    b[j-1] = h;
                }
            }
        }

        for(int i = 0; i < n;i++)
        {
                if(a[i] > b[i])
                {
                    ans++;
                    pr.push_back({3,i+1});
                    int h = b[i];
                    b[i] = a[i];
                    a[i] = h;
                }

        }
        cout<<ans<<endl;
        for(auto it:pr)
            cout<<it.first<<' '<<it.second<<endl;
    }
}

