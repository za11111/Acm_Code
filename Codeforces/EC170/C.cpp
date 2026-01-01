#include <bits/stdc++.h>
using namespace std;
map<long long,int> mp;
long long now[200003];
int main ()

{
    int t;
    cin>>t;
    while(t--)
    {
        mp.clear();
        int n;
        int kk;
        cin>>n>>kk;
        int i;

        for(i = 0;i <n;i++)
        {
            long long tt;
            cin>>tt;
            mp[tt]++;
        }
        long long sum =0;
        long long ttt = 0;
        int j = 0;
        long long fmax = 0;
        long long l =1;
        for(auto &[k,v]:mp)
        {
            now[l] = v;
            l++;
            if(j==0)
            {
                sum+=v;
                ttt = k;
            }
            else
            {
                if(j == kk)
                {
                    fmax = max(sum, fmax);
                    sum-=now[l-kk-1];
                    j--;
                }
                if(k == ttt+1)
                {
                    ttt = k;
                    sum+=v;
                }
                else {
                    ttt = k;
                    fmax = max(sum, fmax);
                    sum = v;
                    j=0;
                }
            }
            j++;
        }
        cout<<max(fmax,sum)<<endl;
    }
}