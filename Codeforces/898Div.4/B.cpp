#include <bits/stdc++.h>
using namespace std;

char a[4][4];
int main ()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int a[11];
        int n;
        cin>>n;
        for(int i =0;i < n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        long long ans = a[0]+1;
        for(int i =1;i < n;i++)
        {
            ans*=a[i];
        }
        cout<<ans<<endl;

    }
}
