#include <bits/stdc++.h>

using namespace std;
constexpr long long mod = 998244353;
long long l[503];
long long r[503];
int main ()
{
     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    t =  1;
    while (t--)
    {
        int n;
        cin>>n;
        for(int i = 0;i < n;i++)
        {
            cin>>l[i]>>r[i];
        }
        for(int i =1;i < n;i++)
        {
            if(l[i] < l[i-1])
                l[i] = l[i-1];
            if(r[i-1] > r[i])
            {
                r[i-1] = r[i];
            }
        }
    }

}