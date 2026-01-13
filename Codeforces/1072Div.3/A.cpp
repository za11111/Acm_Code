#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<= 3)
            cout<<n<<endl;
        else if(n%2==1)
        {
            cout<<1<<endl;
        }
        else
            cout<<0<<endl;
    }

}