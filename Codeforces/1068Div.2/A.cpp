#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k;
        cin>>k;
        string s;
        cin>>s;
        int ans = 0;
        int now = 0;
        for(int i = 0;i < n;i++)
        {
            if(now != 0)
            {
                now--;
                if(s[i] == '1')
                {
                    now = k;
                }
            }

            else if(s[i] == '1')
            {
                now = k;
            }
            else
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }

}