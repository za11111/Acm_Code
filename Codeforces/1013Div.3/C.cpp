#include <bits/stdc++.h>

using namespace std;
long long a[200003];
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(int i =1;i<= n;i++)
            {
                if(i%2==1)
                {
                    cout<<i<<' ';
                }
            }
            for(int i =1;i<= n;i++)
            {
                if(i%2==0)
                {
                    cout<<i<<' ';
                }
            }
            cout<<endl;
        }
    }
}