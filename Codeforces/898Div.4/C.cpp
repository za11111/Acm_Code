#include <bits/stdc++.h>
using namespace std;
char a[11][11];
int b[11][11];
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
        for(int i =1;i <= 10;i++)
        {
            for(int j = 1;j <= 10;j++)
            {
                cin>>a[i][j];
            }
        }

        long long ans =0;
            for(int i=1;i <=5;i++)
            {
                for(int j=i;j <=10-i+1 ;j++)
                {
                    b[i][j]++;


                    if(a[i][j]=='X')
                        ans+=i;
                }

            }

            for(int i =10;i >=6;i--)
            {
                for(int j =i;j >=11-i;j--)
                {b[i][j]++;
                    if(a[i][j]=='X')
                    {
                        ans+=11-i;
                    }
                }
            }

            for(int j = 1;j <=5;j++)
            {
                for(int i=j+1;i<=10-j;i++)
                {b[i][j]++;
                    if(a[i][j]=='X')
                    {
                        ans+=j;
                    }
                }
            }

        for(int j = 10;j >=6;j--)
        {
            for(int i=j-1;i>=12-j;i--)
            {b[i][j]++;
                if(a[i][j]=='X')
                {
                    ans+=11-j;
                }
            }
        }

        cout<<ans<<endl;

    }
}
