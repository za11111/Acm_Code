
#include <bits/stdc++.h>
using namespace  std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        int ans = 0;
        map<char,int> mp;
        for(int i =0;i < n;i++)
        {
            if(s[i] == s[n-1])
                ans++;
        }

        cout<<n-ans<<endl;
    }
}
