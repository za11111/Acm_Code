//
// Created by ZA on 2024/10/11.
//
//
// Created by ZA on 2024/10/11.
//
#include <bits/stdc++.h>

using namespace std;
map<long long,int> a;
void dfs(long long x,long long k)
{
    if(a[x] == 0)
    {
        a[x]++;
    }
    else {
        dfs(x + k, k);
    }//a[0] = 1 a[3]=1
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        a.clear();
        int n;
        long long x;
        long long i;
        cin>>n>>x;
        for(i = 0;i < n;i++)
        {
            long long tt;
            cin>>tt;
            a[tt]++;
            //dfs(tt,x);
        }
        i  = 0;
        int ans = 0;
        for(auto&[k,v]:a)
        {
            if(k == i)
            {
                i++;
                if(v > 1)
                {
                    a[k+x] +=v-1;
                }
                continue;
            }
            else
            {
                cout<<i<<endl;
                ans = 1;
                break;
            }
        }
        if(ans == 1)
            continue;
        else
            cout<<i<<endl;

    }
}
