#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,l,r;
        cin>>n>>m>>l>>r;
        int ll,rr;
        ll=rr=0;
        for(int i=0;i<m;i++)
        {
            if(ll < l)
            {
                ll++;
            }
            else if(ll>l)
            {
                ll--;
            }
            else if(ll==l)
            {
                if(rr < r)
                {
                    rr++;
                }
                else if(rr>r)
                {
                    rr--;
                }
            }

        }
        cout<<ll<<' '<<rr<<endl;
    }

}