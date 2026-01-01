
#include <bits/stdc++.h>
using namespace std;
long long ans [200003];
long long a[200003];

int main ()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        for(int i = 0 ;i < n;i++)
        {
            cin>>a[i];
            ans[i]= ans[i-1]+a[i];
        }
        long long l,r,mid,bns;
        long long low,top;
        low = 0;
        top = n-1;
        l = 0;
        r =n-1;
        while(l <= r)
        {
            mid = l+r >> 1;
            cout<<"? "<<mid-l+1<<" ";
            for(int i = l;i <=mid;i++)
            {
                cout<<i+1<<' ';
            }
            cout<<endl;
            cout.flush();
            long long test;
            cin>>test;
            if(mid-l+1==1&&test!=a[l])
            {
                bns = l+1;
                break;
            }
            else if(test == ans[mid]-ans[l-1])
            {

                low = mid+1;
                top = r;
                l = low;
                r = r;
                 bns = mid;
            }
            else
            {
                l = low;
                r = mid;
                top = mid;
            }
        }
        cout<<"! "<<bns<<endl;
        cout.flush();
    }
}