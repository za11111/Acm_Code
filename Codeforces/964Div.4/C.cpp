#include <bits/stdc++.h>
using namespace std;
struct cj
{
	int l;
	int r;
}a[200003],b[200003];
int cmp(cj a,cj b)
{
	if(a.l == b.l)
		return a.r < b.r;
	return a.l < b.l;
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
		int n;
		long long s,m;
		cin>>n>>s>>m;
		int i = 0;
		for(i = 0;i < n;i++)
		{
			cin>>a[i].l>>a[i].r;
		}
		sort(a,a+n,cmp);
		b[0].l = a[0].l;
		b[0].r = a[0].r;
		int j = 0;
		for(i = 1;i < n;i++)
		{
			if(a[i-1].r >= a[i].l)
			{
				if(a[i-1].r <= a[i].r)
				{
					b[j].r = a[i].r;
				}
				else
				{
					b[j].r = a[i-1].r;
				}
			}
			else
			{
				j++;
				b[j].r = a[i].r;
				b[j].l = a[i].l;
			}
		}
		long long ans = 0;
		if(b[0].l - 0 >= s)
		{
			cout<<"YES"<<"\n";
			continue;
		}
		if(m - b[j].r >= s)
		{
			cout<<"YES"<<"\n";
			continue;
		}
		int cns = 0;
		for(i = 1;i <= j;i++)
		{
			if(b[i].l - b[i-1].r >= s)
			{
				cns = 1;
				break;
			}
		}
		if(cns == 1)
		{
			cout<<"YES"<<"\n";
		}
		else
		{
			cout<<"NO"<<"\n";
		}
	}
}