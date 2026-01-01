#include <bits/stdc++.h>

using namespace std;
long long a[103];
int is(long long x)
{
    for(int i =2;i*i <= x;i++)
    {
        if(x%i==0)
            return 0;
    }
    return 1;
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,k;
        cin>>x>>k;
        if(is(k)&&is(x))
        {
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
    }

}