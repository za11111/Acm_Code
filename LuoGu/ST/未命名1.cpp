#include <bits/stdc++.h>

using namespace std;

int main ()
{
	int v;
	int n;
	cin>>v;
	cin>>n;
	int i;
	int w[35];
	int f[20005];
	for(i = 1;i <= n;i++)
	{
		cin>>w[i];
	}
	int j;
	for(i = 1;i <= n;i++)
	{
		for(j = v;j >= w[i];j--)
		{
			f[j] = max(f[j],f[j - w[i]] + w[i]);
		}
	}
	cout<<v - f[v];

}