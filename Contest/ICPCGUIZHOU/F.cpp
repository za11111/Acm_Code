#include <bits/stdc++.h>

using namespace std;
long long a[5003];
long long b[5003];
long long chafen[5003];
long long n,p;
bool check(long long mid)
{
    memset(chafen,0,sizeof chafen);

    for(int i = 0;i < n;i++)
    {
        chafen[i]+=a[i];
        chafen[i+1]-=a[i];
        b[i] = a[i];
    }
    long long ans = 0;
    for(int i = 0;i < n-mid+1;i++)
    {
        if(b[i]==0)
            continue;
        long long bns = (chafen[i]+p)%p;
        ans = (ans+chafen[i]+p)%p;
        chafen[i] = (chafen[i]-ans+p);
        chafen[i+mid]=(chafen[i+mid]+ans);
        ans = ans - bns + chafen[i];
    }
    for(int i = 0;i < n;i++)
    {
        b[i] = (b[i-1]+chafen[i]+p) % p;
        if(b[i] <0 )
        {
            b[i] = (b[i] + p )%p;
        }
        if(b[i] != 0)
            return false;
    }
    return true;
}
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    t =  1;
    while (t--)
    {
        scanf("%lld%lld",&n,&p);
        for(int i = 0;i < n;i++)
        {
            scanf("%lld",&a[i]);
        }

        long long ans = 1;
       for(int i = n;i>=2;i--)
       {
           if(check(i))
           {
               ans =i;
               break;
           }
       }
        cout<<ans;
    }

}