#include <bits/stdc++.h>
using namespace std;

int main ()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	cin>>t;
	while(t--)
	{
        string s;
        cin>>s;
        for(int i =0;i < s.size()-2;i++)
        {
            cout<<s[i];
        }
        cout<<"i"<<endl;
	}
	return 0;
}
