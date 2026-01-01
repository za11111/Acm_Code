
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,l,r,k;
        cin>>n>>l>>r>>k;
        if(n%2 == 1)
        {
            cout<<l<<'\n';
        }
        else
        {
            if(n == 2)
            {
                cout<<-1<<'\n';
            }
            else
            {
                int p = 0;
                long long hh = l;
                while(hh >0)
                {
                    hh = hh>>1;
                    p++;
                }
                long long ans = 1;
                for(int i =0;i<p;i++)
                    ans = ans<<1;
                if(r >= ans)
                {
                    if(k <=n-2)
                        cout<<l<<'\n';
                    else
                        cout<<ans<<"\n";
                }
                else
                    cout<<-1<<'\n';
            }
        }

    }
    return 0;
}
