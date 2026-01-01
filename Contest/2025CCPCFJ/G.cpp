#include <bits/stdc++.h>

using namespace std;
long long a[100003];
long long chafen[100003];
long long pre[100003];
int main ()
{
    int n,m;
    cin>>n>>m;
    for(int i =1;i <= n;i++)
    {
        cin>>a[i];
    }
    for(int i =1;i <=n;i++)
    {
        if (a[i] -a[i-1]>=0)
        {
            chafen[i] = a[i]-a[i-1];
        }
        else
        {
            chafen[i] = 0;
        }
    }
    for(int i=1;i <= n;i++)
    {
        pre[i] = pre[i-1]+chafen[i];
    }
    long long k;
    cin>>k;
    while(m--)
    {
        int l,r;
        cin>>l>>r;
        cout<<k+pre[r]-pre[l]<<endl;
    }
}