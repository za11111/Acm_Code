#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n ;
        int ans = 0;
        cin>>n;
       long long bns = (n+15-1)/15;
        if(n % 15 == 0)
            {
                ans++;

            }
            else if(n % 15 == 1)
            {
                ans+=2;
                bns--;
            }
            else if( n % 15 == 2)
            {
                ans+=3;
                bns--;
            }
            else
            {

            }

            cout<<ans + bns* 3<<endl;
    }

}