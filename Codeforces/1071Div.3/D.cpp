#include <bits/stdc++.h>

using namespace std;
int a[200003];
int f(int x)
{
    int ans =0;
    while(x>0)
    {
        if(x%2==1)
        {
            ans++;
        }
        else
            return ans;
        x = x/2;
    }
    return ans;
}
int main ()
{
    int t;
    cin>>t;
    vector<int> vt;
    long long x = pow(2,16)-1;
    for(int i =0;i<=x;i++)
    {
        vt.push_back(i);
    }
    vector<int> g[17];
    for(int i = 0;i < vt.size();i++)
    {
        int sum = f(i);
        g[sum].push_back(i);
    }
    for(int i = 0; i<=16;i++)
    {
        sort(g[i].begin(),g[i].end());
    }

    while(t--)
    {
        int n;
        cin>>n;
        long long c;
        c = pow(2,n)-1;
        for(int i =n;i >=0;i--)
        {
            for(int j = 0;j < g[i].size();j++)
            {
                if(g[i][j] > c)
                    break;
                cout<<g[i][j]<<' ';

            }
        }
        cout<<endl;
    }

}
