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
        cout<<2*n<<endl;
        for(int i = 1; i <= n;i++)
        {
            if(i == n)
            {
                cout<<i<<' '<<1<<' '<<1<<endl;
                cout<<i<<' '<<1<<' '<<n<<endl;
            }
            else
            {
                cout<<i<<' '<<1<<' '<<i<<endl;
                cout<<i<<' '<<i+1<<' '<<n<<endl;
            }
        }
    }
}
