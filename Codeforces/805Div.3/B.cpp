#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        map<int,int> mp ;
       string s;
       cin>>s;
       for(int i =0; i < s.size();i++)
       {
           mp[s[i]-'a']++;
       }
       cout<<(mp.size()+3-1)/ 3<<endl;
    }
}
