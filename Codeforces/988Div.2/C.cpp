#include <bits/stdc++.h>
using namespace std;
int a[200003];
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n == 2)
        {
            cout<<-1<<endl;
            continue;
        }
        else if (n == 3||n == 4)
        {
            cout<<-1<<endl;continue;
        }
        else if (n == 5)
        {
            cout<<"1 3 5 4 2"<<endl;continue;
        }
        else
        {
            cout<<"1";
            if(n%2==0)
            {
                for(int i = n-1;i >5;)
                {
                    cout<<" "<<i;
                    i  = i-2;
                }
                cout<<" 3 5 4 2";
                for(int i = n;i >4;)
                {
                    cout<<" "<<i;

                    i  = i-2;
                }
            }
            else
            {
                for(int i = n;i >5;)
                {
                    cout<<" "<<i;
                    i  = i-2;
                }
                cout<<" 3 5 4 2";
                for(int i = n-1;i >4;)
                {
                    cout<<" "<<i;

                    i  = i-2;
                }
            }
            cout<<endl;
        }

    }
}
//1 2 3 4
//1 3 5 4 2
//1 3 5 4 2 6
//1 7 3 5 4 2 6
//1 7 3 5 4 2 6 8
//1 9 7 3 5 4 2 6 8