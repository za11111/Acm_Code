
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,x,y;
        cin>>a>>b>>x>>y;
        if(a > b)
        {
            if((a&1) == 1 && a == b+ 1)
                cout<<y<<'\n';
            else
                cout<<-1<<'\n';
        }
        else
        {
            long long ans = b - a;
            if(y <= x)
            {
                if((a&1)==0)
                {
                    cout<<ans/2*x+(ans-ans/2)*y<<'\n';
                }
                else
                    cout<<ans/2*y+(ans-ans/2)*x<<'\n';
            }
            else
            {
                cout<<ans*x<<'\n';
            }
        }
    }
    return 0;
}
