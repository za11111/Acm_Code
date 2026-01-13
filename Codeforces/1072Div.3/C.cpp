#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        if(n == k)
        {
            cout<<0<<endl;
        }
        else
        {
            int ans =0 ;
            int cns =0;
            while(n%2==0)
            {
                n =n /2;
                ans++;
                if(n == k)
                {
                    cns= 1;
                    break;
                }
            }
            if(cns == 1)
            {
                cout<<ans<<endl;
            }
            else if(k > n)
            {
                cout<<-1<<endl;
            }
            else
            {
                while(1)
                {
                    ans++;
                    if(k == n/2||k == n/2+1)
                    {
                        cns=1;
                        break;
                    }
                    if(k > n)
                        break;
                    n = n/2;

                }
                if(cns == 1)
                    cout<<ans<<endl;
                else
                    cout<<-1<<endl;
            }

        }

    }

}