#include <bits/stdc++.h>
using namespace std;
long long ans [200003];
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,m;
        cin>>n>>m;
        long long bns = 0;
        for(int i =0;i < n;i++)
        {
            long long sum = 0;
            for(int j = 0;j < m;j++)
            {
                long long tt;
                cin>>tt;
                sum+=tt;
                bns += tt*(m-j);
            }
            ans[i]= sum;
        }
        sort(ans,ans+n);

        for(int i = n-1;i >=0;i--)
        {
            bns+=ans[i]*i*m;
        }
        cout<<bns<<endl;
    }

    return 0;
}
