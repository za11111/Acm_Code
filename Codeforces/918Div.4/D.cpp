#include <bits/stdc++.h>

using namespace std;
//int a[200003][2];
int main ()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
        int n;
        cin>>n>>a;
        int ans =0;
        int j = 0;
        int b[200003];
        memset(b,0,sizeof(b));
        for(int i =0;i < n;i++)
        {
            if(a[i]=='a'||a[i]=='e')
            {
                b[i] =1 ;
            }
        }
        for(int i = 0;i < n;i++)
        {
            if(b[i]==1)
            {
                if(i==n-1)
                {
                    cout<<a[i-1]<<a[i];
                }
                else if(i==n-2||b[i-1]==0&&b[i+1]==0&&b[i+2]==0)
                {

                    cout<<a[i-1]<<a[i]<<a[i+1];

                }
                else
                {
                    cout<<a[i-1]<<a[i];
                }
                if(i!=n-1&&i!=n-2)
                    cout<<".";
            }

        }
        cout<<endl;
	}
}
