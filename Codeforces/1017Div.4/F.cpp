#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,m,k;
       cin>>n>>m>>k;
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               if(m%k==0)
                   cout<<(i*m+j+i)%k+1;
               else
                   cout<<(i*m+j)%k+1;
               cout<<' ';
           }
           cout<<endl;

       }
       //cout<<endl;
    }

}
