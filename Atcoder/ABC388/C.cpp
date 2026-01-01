#include <bits/stdc++.h>

using namespace std;
long long a[500003];

map<long long ,long long >mp;
int main ()
{

    int n;
    cin>>n;
    for(int i =0; i < n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;

    }
    long long cns =0 ;
    long long ans = 0;
    long long bns = 0;
    long long t = 0;
    for(int i  =0;i < n;i++)
    {
        if(a[i]*2 > a[n-1])
            break;
        if(i!=0&&a[i]==a[i-1]) {
            bns += t;
            continue;
        }
        long long l = i+1;
        long long r = n-1;
        long long mid;
        while (l<=r)
        {
            mid=(l+r)/2;
            if (a[mid] >=a[i] * 2)
            {
                ans=mid;
                r=mid-1;//从[l,mid-1]开始找
            }
            else l=mid+1;
        }
        bns+=n-ans; //1 2 3 4
        t = n-ans;
    }
    cout<<bns<<endl;
}