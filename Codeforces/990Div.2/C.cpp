#include <bits/stdc++.h>
using namespace std;
long long a[4][5003];
int main() {
    int t;
    cin>>t;
    while(t--)
    {
       int m;
       cin>>m;
       for(int i=1;i <=2;i++)
       {
           for(int j =1;j <= m;j++)
           {
               cin>>a[i][j];
           }
       }
       long long sum =0;
       int index= 0;
       int index1=0;
       long long f_max=LONG_LONG_MIN;
        long long fmin=LONG_LONG_MAX;
       for(int i =1;i<=m;i++)
       {
           f_max = max(f_max,min(a[1][i],a[2][i]));
           sum += max(a[1][i],a[2][i]);
       }
       cout<<sum+f_max<<endl;
    }
}