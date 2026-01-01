#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int >a;
        vector<int >b;
        long long l,r;
        cin>>l>>r;
        while(l > 0)
        {
            a.push_back(l%10);
            b.push_back(r%10);
            l = l/10;
            r = r/10;
        }
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int ans = 0;
        for(int i= 0;i < a.size();i++)
        {
            int ts = b[i]-a[i];
            if(ts >= 2)
                break;
            else if(i == 0)
            {
                if(ts==0)
                    ans+=2;
                else
                    ans++;
            }
            else
            {
                if(a[i-1] == b[i-1])
                {
                    if(a[i] == b[i])
                        ans+=2;
                    else
                        ans++;
                }
                else
                {
                  if(a[i] == b[i])
                        break;
                  else if(ts == -9)
                      ans++;
                  else
                      break;
                }
            }
        }
        cout<<ans<<endl;
    }
}
