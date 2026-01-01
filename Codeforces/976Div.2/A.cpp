#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        int i = 0;
        long long sum = 1;
        if(n < k)
        {
            cout<<n<<endl;
            continue;
        }
        if(k==1)
        {
            cout<<n<<endl;
            continue;
        }//33 ^ 1
        //11 ^ 0
        int bns = 0;
        int ans = 0;
        while(n>0)
        {
            int tt = n % k;
            if(tt == 0)
            {

            }
            else
            {
                ans+=tt;
            }
            n = n / k;


        }
        cout<<ans<<endl;
    }
}