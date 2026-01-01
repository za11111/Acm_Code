#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    for(int i =1;i < s.size();i++)
    {
        if(s[i]==s[i-1])
        {
            cout<<1<<endl;
            return;
        }
    }
    cout<<s.size()<<endl;
    return;
}
int main ()
{
	int t;
	cin>>t;
	while(t--)
	{
        solve();
	}
}
