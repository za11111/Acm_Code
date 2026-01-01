#include <bits/stdc++.h>

using namespace std;
long long a[200003];
long long ans[200003];
long long bns[200003];
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<long long ,long long>mp;
        int bb = 0;
        mp[0] = 1;
        long long s= 0 ;
        for(int i =0;i  <n;i++) {
            cin >> a[i];
            if (i % 2 == 1) {
                a[i] = -a[i];
            }
            s+=a[i];
            if(mp[s])
            {
                bb = 1;
            }
            mp[s]++;
        }

        if(bb)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        


    }
}
