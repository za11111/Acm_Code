
#include <bits/stdc++.h>
using namespace std;
long long ans [200003];
long long a[200003];

int main ()
{
    int t;
    cin>>t;
    while(t--) {
        memset(ans,0,sizeof ans);
        memset(a,0,sizeof a);
        int n,q;
        cin>>n>>q;
        long long all = 0;
        for(int i =1 ;i <= n;i++)
        {
            cin>>a[i];
            all +=a[i];
            ans[i] = a[i]+ans[i-1];
        }
        while(q--)
        {
            long long l,r,k;
            cin>>l>>r>>k;
            long long now = all -(ans[r]-ans[l-1])%2;
            now = (now+2)%2;
            if(((now+(r-l+1)*k%2)+2) %2==1)
            {cout<<"YES\n";}
            else
                cout<<"NO\n";
        }
    }
}