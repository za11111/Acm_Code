#include <bits/stdc++.h>

using namespace std;

unordered_map<int,int> mp;
int gcd(int a,int b)
{
    return b?gcd(b,a%b):a;
}
int main ()
{
   // ios::sync_with_stdio(0);
    //cin.tie(0);
    //cout.tie(0);
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            mp[i + j]++;
        }
    }
    int all = 0;
    for (auto [k, v]: mp)
    {
        all += v;
    }
    int t;
    cin>>t;
    while (t--)
    {

            int x, y;
            cin >> x >> y;
            if (x > y)
            {
                cout << 0 << '\n';
            }
            else
            {
                int ans = 0;
                for (auto [k, v]: mp)
                {
                    if (k >= x && k <= y) {
                        ans+=v;
                    }
                }
                if(ans == 0)
                    cout<<0<<'\n';
                else
                {
                    int f = gcd(all, ans);
                    cout << (ans / f) << "/" << (all / f) << '\n';
                }
            }
    }

}