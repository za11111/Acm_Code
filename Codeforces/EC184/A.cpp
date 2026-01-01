#include<bits/stdc++.h>

using namespace std;
long long a[300003];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a = INT_MIN;

        int n,k;
        cin>>n>>k;
        int ans = 0;
        int bns = 0;
        for(int i =0;i < n;i++)
        {
            cin>>a[i];
            if(a[i] > k)
            {
                ans++;
            }
            else if(a[i] < k)
                bns++;
        }
        if(ans > bns)
        {
            cout<<k+1;
        }
        else
        {
            cout<<k-1;
        }
        cout<<endl;
    }
}
