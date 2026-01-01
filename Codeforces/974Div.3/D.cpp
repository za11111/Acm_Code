#include <bits/stdc++.h>
using namespace std;

int a[100003];
int b[100003];
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        int n,d,k;
        cin>>n>>d>>k;
        for(int i =0;i < k;i++)
        {
            int l,r;
            cin>>l>>r;
            a[l]++;
            b[r]++;
        }
        for(int i =0;i < n;i++)
        {
            a[i+1]+=a[i];
            b[i+1]+=b[i];
        }
        int fmin,fmax;
        fmin =INT_MAX;
        fmax = 0;
        int ll,rr;
        ll=rr=0;
        for(int i =d;i <= n;i++)
        {
            int ans = a[i]-b[i-d];
            if(ans > fmax)
            {
                fmax = ans;
                ll=i-d+1;
            }
            if(ans < fmin)
            {
                fmin = ans;
                rr = i-d+1;
            }
        }
        cout<<ll<<" "<<rr<<endl;

    }

    return 0;
}