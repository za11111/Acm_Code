#include <bits/stdc++.h>

using namespace std;
int a[200003];
set<int> st1;
set<int> st2;
int main ()
{

    int t;
    int n,m,kk;
    cin>>n>>m>>kk;
    for(int i =0;i < n;i++)
    {
        cin>>t;
        if(t > kk)
            continue;
        st1.insert(t);
    }
    for(int i = 0;i < m;i++)
    {
        cin>>t;
        if(t > kk)
            continue;
        st2.insert(t);
    }
    for(auto it:st1)
    {
        a[it]+=1;
    }
    for(auto it:st2)
    {
        a[it]+=10;
    }
    int ans,bns,cns;
    ans = bns = cns =0;
    for(int i=1;i <= kk;i++)
    {
        if(a[i] == 0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        else
        {
           if(a[i] == 1)
           {
               ans++;
           }
           if(a[i] == 10)
           {
               bns++;
           }
           if(a[i] ==11)
           {
               cns ++;
           }
        }
    }
    if(ans > kk/2||bns > kk/2)
        cout<<"NO";
    else if(ans +bns + cns == kk )
        cout<<"YES";
    else
        cout<<"NO";



}