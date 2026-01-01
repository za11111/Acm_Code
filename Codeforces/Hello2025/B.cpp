#include <bits/stdc++.h>
using namespace std;
int a[100003];
pair<int ,int> pr;
map<int ,int > mp;
vector<pair<int,int> > vt;
int cmp(pair<int,int > pr1,pair<int,int> pr2)
{
    return pr1.second < pr2.second;
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        mp.clear();
       int n,kk;
       cin>>n>>kk;
       for(int i = 0;i < n;i++)
       {
           cin>>a[i];
            mp[a[i]]++;
       }
        long long ans = kk;
        for(auto &[k,v] : mp)
        {
            vt.push_back(pair<int,int>(k,v));
        }
        sort(vt.begin(),vt.end());
        for(auto it:vt)
        {
            if(it.second <=ans)
            {
                mp[it.second] = 0;
            }
        }
    }

}