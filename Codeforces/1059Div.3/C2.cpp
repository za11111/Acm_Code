
#include <bits/stdc++.h>

using namespace  std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        long long s = (long long)(a^b);
        if(s >a)
        {
            cout<<-1<<endl;
        }
        else

            cout<<1<<" "<<s<<endl;


    }
}