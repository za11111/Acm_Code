//
// Created by ZA on 2024/10/11.
//
//
// Created by ZA on 2024/10/11.
//
//
// Created by ZA on 2024/10/11.
//
#include <bits/stdc++.h>

using namespace std;
int a[200003];
unordered_map<int,int> mp;
vector <int> b;

auto main() -> int {

}

int main () {
    int t;
    cin >> t;
    while (t--) {
        b.clear();
        mp.clear();
        int n,m;
        cin>>n>>m;
        int q;
        cin>>q;
        int i;
        for(i = 0; i < n;i++) {
            cin >> a[i];
        }
        for(i =0;i < m;i++)
        {
            int tt;
            cin>>tt;
            if(mp[tt] == 0)
            {
                mp[tt]++;
                b.push_back(tt);
            }

        }
        int ans = 0;
        int j =0 ;
        for(auto&k:b) {
            if(k==a[j])
            {
                j++;
            }
            else
                ans = 1;

        }
        if(ans == 1)
            cout<<"TIDAK"<<endl;
        else
            cout<<"YA"<<endl;

    }
}
