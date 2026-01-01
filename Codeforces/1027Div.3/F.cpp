#include <bits/stdc++.h>

using namespace  std;
int p1[103];//记录因数，p[1]为最小因数
int c1[103];//记录第i个因数的个数，
int  factor1(int n)
{
    int m = 0;
    int pp = 2;
    for(int i = pp;i <= sqrt(n);i++)
    {
        if(n % i == 0)
        {
            pp = i;//方便从pp遍历到sqrt(n)
            p1[++m] = i;
            c1[m] = 0;
            while(n % i== 0)//把n中重复的去掉
            {
                n = n / i;
                c1[m]++;//去一次个数加1
            }
        }
    }
    if(n > 1)
    {
        p1[++m] = n;
        c1[m] = 1;
    }
    return m;
}
int p2[103];//记录因数，p[1]为最小因数
int c2[103];//记录第i个因数的个数，
int  factor2(int n)
{
    int m = 0;
    int pp = 2;
    for(int i = pp;i <= sqrt(n);i++)
    {
        if(n % i == 0)
        {
            pp = i;//方便从pp遍历到sqrt(n)
            p2[++m] = i;
            c2[m] = 0;
            while(n % i== 0)//把n中重复的去掉
            {
                n = n / i;
                c2[m]++;//去一次个数加1
            }
        }
    }
    if(n > 1)
    {
        p2[++m] = n;
        c2[m] = 1;
    }
    return m;
}

int main()
{
    int t;
    cin>>t;
    while(t--) {
        memset(p1, 0, sizeof p1);
        memset(p1, 0, sizeof p2);
        memset(p1, 0, sizeof c1);
        memset(p1, 0, sizeof c2);
        map<int, int> mp1;
        map<int, int> mp2;
        map<int, int> chen;
        map<int, int> chu;
        long long a, b, k;
        cin >> a >> b >> k;
        factor1(a);
        factor2(b);

        for (int i = 0; i < 100; i++) {
            if (p1[i] == 0) {
                break;
            } else {
                mp1[p1[i]] = c1[i];
            }
        }
        for (int i = 0; i < 100; i++) {
            if (p2[i] == 0) {
                break;
            } else {
                mp2[p2[i]] = c2[i];
            }
        }
        for (int i = 0; i < 103; i++) {

        }
        for (auto &[k, v]: mp1) {
            auto it = mp2.find(k);
            if (it != mp2.end()) {
                chu[k] += v;
            } else {
                if (v > it->second) {
                    chu[k] += v - it->second;
                } else
                    chen[k] += it->second - v;
            }
        }
        for (auto &[k, v]: mp2) {
            auto it = mp1.find(k);
            if (it != mp1.end()) {
                chen[k] += v;
            }
        }
        int fmax = 0;
        for (auto [k, v]: chen) {
            if(v >0)
                fmax = max(k, fmax);
        }
        for (auto [k, v]: chu) {
            if(v >0)
                fmax = max(k, fmax);
        }
        if(k < fmax)
            cout<<k<<endl;

    }
}