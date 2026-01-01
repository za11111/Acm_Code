
#include <bits/stdc++.h>
using namespace  std;
int a[200003];
int b[200003];
int ans1[200003];
int bns1[200003];
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i = 1;i <=n;i++)
        {
            cin>>a[i];
        }
        for(int i = 1;i<= n;i++)
        {
            cin>>b[i];
        }
        int ans =-1;
        int x,y;
        x= y=0;
        for(int i =1;i<=n;i++)
        {
            x=x^a[i];
            ans1[i]=ans1[i-1]^a[i];
            y=y^b[i];
            bns1[i]=bns1[i-1]^b[i];
        }
        if(x==y)
        {
            cout<<"Tie\n";
            continue;
        }

        for(int i = n;i>=1;i--)
        {
            if((ans1[i-1]^a[i]) != (bns1[i-1]^b[i]))
            {
                if(i%2==1)
                    ans=1;
                else
                    ans=0;
            }
        }
        if(ans ==1)
        {

            cout<<"Ajisai\n";
        }
        else
            cout<<"Mai\n";
    }
}
