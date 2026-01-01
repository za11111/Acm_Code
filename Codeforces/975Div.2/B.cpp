#include <bits/stdc++.h>

using namespace std;
long long a[200003];
unordered_map<long long,long long> mp;
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        mp.clear();
        long long n,q;
        cin>>n>>q;
        long long  i;
        for(i =1 ;i <= n;i++)
        {
            cin>>a[i];
        }
        long long fmin=0;
        long long fmax=0;
        long long temp;
        for(i = 1;i <=n-1;i++)
        {
            temp = n*i-i*i+i-1;
            if(temp > fmax)
                fmax = temp;
            if(temp<fmin)
                fmin = temp;
            mp[temp]++;
            if(a[i+1]-a[i] >1)
            {
                mp[temp-i+1]+=a[i+1]-a[i]-1;
            }
        }
        mp[n*n-n*n+n-1]++;
        while(q--)
        {
            long long k;
            cin>>k;
            int ans =0;
                unordered_map<long long,long long >::iterator it;
                long long answer;
                it = mp.find(k);
                 if(it != mp.end())
                    cout<<it->second<<" ";
                else
                    ans =  1;

            if(ans == 0)
                continue;
            else
                cout<<0<<' ';

        }
        cout<<"\n";
    }
}


