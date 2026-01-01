//
// Created by ZA on 2025/6/23.
//
#include <bits/stdc++.h>

using namespace std;
long long lowbit(long long x)
{
    return x & (-x);
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> vt;
        long long n;
        cin>>n;
        if((long long)sqrt(n)*(long long)sqrt(n)==n)
        {
            cout<<0<<endl<<'\n';
            continue;
        }
        int ans = 0;

        long long h = n;
        while(h > 0)
        {
            h = h>>1;
            ans++;
            //   p = p * 2;
        }
        h = n;
        while(1)
        {
            long long s = lowbit(h);
            long long ss = s;
            int bns = 0;
            while(s > 0)
            {
                bns++;
                s = s>>1;
            }
            if(ans > bns)
            {
                vt.push_back(ss);
                h+=ss;
            }
            else
            {
                if(bns %2==1)
                    break;
                else
                {
                    vt.push_back(h);
                    break;
                }
            }
        }
        cout<<vt.size()<<"\n";
        for(auto it:vt)
        {
            cout<<it<<' ';
        }
        cout<<endl;
    }
}