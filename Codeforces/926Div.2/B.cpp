
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k;
        cin>>k;
        if(k == 4*n-2)
        {
            cout<<n*2<<endl;
        }
        else
        cout<<(k+2-1)/2<<endl;
    }
    return 0;

}
