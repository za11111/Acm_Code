#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int fmax = 1e9;
        while(x > 0)
        {
            fmax = min(x%10,fmax);
            x = x/10;
        }
        cout<<fmax<<endl;
    }
}