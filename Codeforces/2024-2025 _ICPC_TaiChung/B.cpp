#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int t;
   cin>>t;
    //t = 1;
    while(t--)
    {
        long long w,b;
        cin>>w>>b;
        long long  ans =w+b;
        long long bns = 0;
       for(int i =1;i <=1000000;i++)
       {
           ans-=i;
           if(ans < 0)
               break;
           else
               bns++;
       }
        cout<<bns<<endl;
    }
}
