#include <bits/stdc++.h>
using namespace  std;
map<char,int> mp;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int bns = 0;
        for(int i =0;i < 26;i++)
        {
            mp['a'+i] = 1;
        }
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i = 0;i < n;i++)
        {
            if(i%2==0)
            {
                mp[s[i]] = 1;
            }
            else
                mp[s[i]] = 0;
        }
        for(int i = 0;i < n;i++)
        {
            if(i%2==0)
            {
                if(mp[s[i]] == 1)
                {}
                else
                {
                    bns = 1;break;
                }

            }
            else
            {
                if(mp[s[i]] == 0)
                {}
                else
                {bns = 1;break;}

            }

        }
        if(bns != 1)
        {
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
    }

}
