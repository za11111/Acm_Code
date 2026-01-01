#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,p;
        cin>>n>>k>>p;
        k =  abs(k);
        int ans = (k+p-1) / p;

            if(ans <=n)
            {
                cout<<ans<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }

    }
}
