#include <bits/stdc++.h>

using namespace std;

int f(long long x)
{
    if((x &(x-1)) == 0)
        return 1;
    else
        return 0;
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x;
        cin>>x;
        if(f(x) || f(x+1))
        {
            cout<<"-1\n";
            continue;
        }
        long long ans =1 ;
        while(ans * 2 < x)
        {
            ans = ans*2;
            //x =x/10;
        }
        cout<<ans-1<<endl;
    }
}