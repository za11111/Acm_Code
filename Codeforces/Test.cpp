#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
long long a[200003];
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long > one_index,zero_index;
        for(int i = 0;i < n;i++)
        {
            cin>>a[i];
            if(a[i]%2==1)
            {
                one_index.push_back(a[i]);
            }
            else
                zero_index.push_back(a[i]);
        }
        sort(a,a+n,[](long long x,long long y){
            return x > y;
        });
        sort(one_index.begin(),one_index.end(),[](long long x,long long y){
            return x > y;
        });
        sort(zero_index.begin(),zero_index.end(),[](long long x,long long y){
            return x > y;
        });
        int one ,zero;
        one = zero = 0;
        long long ans = 0;
        for(int i = 0;i < n;i++)
        {
            ans+=a[i];
            if(a[i] %2 == 0 )
            {
                zero++;
            }
            else
            {
                one ++;
            }
            if(ans % 2!=0)
                cout<<ans<<' ';
            else
            {
                long long fmax = 0;
                if(zero -1>=0&&one + 1<=one_index.size())
                {
                    fmax = max(fmax,ans-zero_index[zero-1]+one_index[one]);
                }
                if(one -1>=0&&zero+1<=zero_index.size())
                {
                    fmax = max(fmax,ans-one_index[one-1]+one_index[zero]);
                }
                cout<<fmax<<' ';
            }
        }
        cout<<endl;

    }

}