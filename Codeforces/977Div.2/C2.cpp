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
int b[200003];
vector<int> c;
int main () {
    int t;
    cin >> t;
    while (t--) {
        c.clear();
        mp.clear();
        int n,m,q;
        cin>>n>>m>>q;
        int i;
        for(i = 0; i < n;i++) {
            cin >> a[i];
        }
        for(i =0;i < m;i++)
        {
            cin>>b[i];
            if(mp[b[i]]==0)
            {
                mp[b[i]]++;
                c.push_back(b[i]);
            }
        }
        int ans = 0;
        int j =0 ;
        for(auto&k:c)
        {
            if(k==a[j])
                j++;
            else
                ans = 1;
        }//2 2 3
        //
        //2 3 4
        //2 3 3
        //
        while(q--)
        {
            c.clear();
            int l,r;
            cin>>l>>r;
            if(b[l-1]==b[l-1-1])
            {
                if(r == b[l-1-1]||r==b[l])
                {
                }
                else
                {
                    if(ans==0)
                        ans =1;

                }
            }
            else if(b[l-1] == b[l])
            {
                if(r == b[l-1-1]||r==b[l])
                {
                }
                else
                {

                }
            }


            if(ans == 1)
                cout<<"TIDAK"<<endl;
            else
                cout<<"YA"<<endl;

        }
    }
}
