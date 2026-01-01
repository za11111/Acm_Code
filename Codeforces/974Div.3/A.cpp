#include <bits/stdc++.h>

using namespace std;
int a[52];
int main ()
{
	int t;
    cin>>t;
	while(t--)
	{
		int n;
        cin>>n;
        int k;
        cin>>k;
        int i;
        for(i = 0;i < n;i++)
        {
            cin>>a[i];
        }
        int sum =0;
        int money = 0;
        for(i =0 ;i < n;i++)
        {
            if(a[i] >= k)
            {
                money+=a[i];
            }
            if(a[i] == 0&&money > 0)
            {
                money--;
                sum++;
            }
        }
        cout<<sum<<endl;


	}
}