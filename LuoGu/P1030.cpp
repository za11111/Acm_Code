#include <bits/stdc++.h>
using namespace std;

void dfs(string a, string b)
{
	if(a.size() > 0)
	{
		char ch = b[b.size() - 1];
		cout<<ch;
		int k = a.find(ch);
		dfs(a.substr(0,k), b.substr(0,k));
		dfs(a.substr(k + 1),b.substr(k,a.size() - k - 1));
		
	}
}
int main ()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string a;
	string b;
	cin>>a>>b;
	dfs(a, b);
	
}