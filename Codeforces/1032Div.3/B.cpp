#include <bits/stdc++.h>

using namespace std;
map<char,int> mp;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        mp.clear();
        int n;
        cin>>n;
        string s;
        cin>>s;
        char l = s[0];
        char r = s[n-1];
        int ans =0 ;
        for(int i= 1;i < n-1;i++)
        {
            if(s[i] == l||s[i]==r)
                ans = 1;
            mp[s[i]]++;
        }
        if(ans)
        {
            cout<<"Yes\n";
            continue;
        }
        for(auto &[k,v]:mp)
        {
            if(v >=2)
                ans=1;
        }
        if(ans)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
}