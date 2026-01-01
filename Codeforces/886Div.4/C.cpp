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
		char a[11][11];
        for(int i =1;i<=8;i++)
        {
            for(int j = 1;j <= 8;j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i =1;i<=8;i++)
        {
            for(int j = 1;j <= 8;j++)
            {
                if(a[i][j]!='.')
                {
                    cout<<a[i][j];
                }
            }
        }
        cout<<endl;
    }
}
