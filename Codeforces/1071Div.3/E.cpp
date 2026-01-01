#include <bits/stdc++.h>

using namespace std;
long long  p[200003];
long long xa[200003];
long long ya[200003];
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x,y;
        cin>>n>>x>>y;
        string s;
        cin>>s;
        long long all = 0;
        for(int i = 0;i < n;i++)
        {
            cin>>p[i];
            all += p[i];
        }
        if(x+y < all)
        {
            cout<<"NO\n";
            continue;
        }
        int ans = 0;
        char ch = s[0];
        for(int i = 1;i < n;i++)
        {
            if(s[i] == ch)
            {
                continue;
            }
            else
            {
                ans = 1;
                break;
            }
        }
        if(ans == 0)
        {
            long long allx,ally;
            allx = ally = 0;
            long long canx,cany;
            canx = cany = 0;
            for(int i = 0;i < n;i++)
            {
                if(s[i] == 0)
                {
                    allx += p[i];
                    cany += (p[i] - 1) / 2;
                }
                else
                {
                    ally += p[i];
                    canx += (p[i] - 1)/ 2;
                }
            }
            if(allx <= x&&ally <=y)
            {
                cout<<"YES\n";
            }
            else if(allx > x)
            {
                if(allx-x <= canx)
                    cout<<"YES\n";
                else
                    cout<<"NO\n";
            }
            else
            {
                if(ally-y <= cany)
                    cout<<"YES\n";
                else
                    cout<<"NO\n";
            }
        }
        else if(ans == 1)
        {
            
        }


    }

}


