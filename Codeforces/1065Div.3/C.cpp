
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
        for(int i = 0;i < n;i++)
        {
            cin>>a[i];
        }
        for(int i = 0;i< n;i++)
        {
            cin>>b[i];
        }
        int ans =-1;
        int x,y;
        x= y=0;
        for(int i =0;i<n;i++)
        {
            x=x^a[i];
            y=y^b[i];
        }
        if(x==y)
        {
            cout<<"Tie\n";
            continue;
        }

        for(int i = n-1;i>=0;i--)
        {
            if(a[i]==(!b[i]))
            {
                if(i%2==0)
                    ans=1;
                else
                    ans =0;
                break;
            }

        }if(ans ==1)
        {

            cout<<"Ajisai\n";
        }
        else
            cout<<"Mai\n";
    }
}
