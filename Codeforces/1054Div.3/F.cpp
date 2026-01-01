//
// Created by ZA on 2025/9/21.
//
#include <bits/stdc++.h>

using namespace std;
//long long a[200003];
long long h,d;
string s;
long long  check (long long mid,long long hh)
{
    long long h=hh;
    long long stop = mid - d;
    long long quyu = min(stop+1,d);

    if(stop == 0)
    {
        if(h-d*(d+1)/2<1)
            return 0;
        else
            return 1;
    }
    if(stop >= d)
    {
        h +=stop-d+1;
    }
    long long changdu1 = (d+quyu-1)/quyu;
    long long changdu2 = d/quyu;
    long long ans = 0;
    ans = (1+changdu1 )*changdu1/2;
    if(h-ans<1)
        return 0;
    long long bns = 0;
    long long fenpei;
    if(quyu -1<=0)
    {
        return 1;
    }
    fenpei = (h-ans)/(quyu-1)+1;
    if((h-ans)%(quyu-1) ==0)
    {
        bns = fenpei-(1+changdu2 )*changdu2/2;
        if(bns >=1)
            return 1;
        else
            return 0;
    }
    else
    {
        bns = fenpei-(1+changdu2 )*changdu2/2;
        if(bns >=0)
            return 1;
        else
            return 0;
    }


}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        cin>>h>>d;
        long long l,r;
        l = d;
        r =  (d+1)*d/2+1;
        long long mid,ans;
        while(l <= r)
        {
            mid = l+ r>>1;
            if( check(mid,h))
            {
                ans = mid;
                r=  mid -1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout<<ans<<endl;
    }

}
/*
2
9
abbbbabbb
9
baabbbaab




1
7
bbabbab





*/