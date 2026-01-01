#include<bits/stdc++.h>

using namespace std;
long long f(long long b)
{
    return max(0ll,b-(b/2+b/3+b/5+b/7-b/6-b/10-b/15-b/14-b/21-b/35+b/30+b/42+b/70+b/105-b/210));
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        cout<<f(b)-f(a-1)<<endl;

    }
}
