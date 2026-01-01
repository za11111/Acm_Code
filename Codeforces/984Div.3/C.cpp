#include <bits/stdc++.h>
using namespace std;
int a[20003];
int n;
string s;

bool check_1100(long long i) {
    n = s.size();
    if (i < 0) return false;
    if (i >= n - 3) return false;
    if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0') return true;
    return false;
}

int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {

        cin>>s;
        int q;
        cin>>q;
        int ans =0;
        for(int i =0;i < s.size();i++)
        {
            if(check_1100(i))
                ans++;
        }
        while(q--)
        {
            int l;
            char r;
            cin>>l>>r;
            if(s[l-1]!=r) {
                if (s[l-1] != r) {
                    bool before = check_1100(l - 3) || check_1100(l - 2) || check_1100(l - 1) || check_1100(l-4);
                    s[l-1] = r;
                    bool after = check_1100(l - 3) || check_1100(l - 2) || check_1100(l - 1) || check_1100(l-4);
                    ans += after - before;  //1234;
                                            //0123
                }

            }
            if(ans)
            cout<<"YES\n";
            else
                cout<<"NO\n";

        }

    }
}