#include <bits/stdc++.h>
using namespace std;

char a[4][4];
int main ()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        char l,r;
    	for(int i =1;i <=3;i++)
        {
            for(int j = 1;j <=3;j++)
            {
                cin>>a[i][j];
                if(a[i][j] == '?')
                {
                    l = i;
                    r = j;
                }
            }
        }
        int ans =0;
        for(int i =1;i<=3;i++)
        {
            if(a[i][r] != '?')
                ans+=a[i][r];
        }
        cout<<char('A'+'B'+'C'-ans)<<endl;
    }
}
