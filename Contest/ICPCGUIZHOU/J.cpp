#include <bits/stdc++.h>

using namespace std;
long long a[1000003];
int main ()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long ans = 0;
        for(int i  =0 ;i < n;i++)
        {
            cin>>a[i];
            if(a[i] == 1)
                ans++;
        }
        if(ans%2==0)
            cout<<"Bob\n";
        else
            cout<<"Alice\n";
    }
}