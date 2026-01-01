
#include <bits/stdc++.h>

using namespace  std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s1;
        string s2;
        cin>>n>>s1>>s2;
        int a[28];
        int b[28];
        memset(a,0,sizeof a);
        memset(b,0,sizeof b);
        for(int i  =0;i < s1.size();i++)
        {
            a[s1[i]-'a']++;
            b[s2[i]-'a']++;
        }
        int ans = 0;
        for(int i = 0;i < 26;i++)
        {
            if(a[i] != b[i])
            {
                ans= 1;
                break;
            }
        }
        if(ans == 1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}