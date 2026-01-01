#include <bits/stdc++.h>

using namespace std;
int a[803][803];
int b[1604];
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(b,0,sizeof b);
        map<int,int>mp;
        int n;
        cin>>n;
        for(int i =1;i <= n;i++)
        {
            for(int j= 1;j<=n;j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i =1;i <= n;i++)
        {
            for(int j= 1;j<=n;j++)
            {
                b[i+j] = a[i][j];
                mp[a[i][j]]=1;
            }
        }
        int kong=1 ;
        for(auto &[k,v]:mp)
        {
            if(kong != k)
            {
               // kong++;
                break;
            }
            else
                kong++;
        }
        for(int i=1;i <=2* n;i++)
        {
            if(b[i]==0)
                b[i]=kong;
        }
        for(int i=1;i <= 2*n;i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }

}