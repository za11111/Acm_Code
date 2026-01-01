#include <bits/stdc++.h>
using namespace std;
//4 9 16 25
//1+3+5+7+9
//n^2
//1 4 9 16 25

int main ()
{
    int n;
    int i;
    cin >> n;
    int j,k;
    int m;
    int cnt = 0;
    for(i = 0;i < n;i++)
    {
        cin >> m;
        char a[22][22];
        memset(a,'0',sizeof(a));
        for(j = 1;j <= m ;j++)
        {
            for(k = 1;k <= m;k++)
            {
                cin>>a[j][k];
            }
        }
        for(j = 1;j <=m ;j++)
        {
            for(k = 1;k <= m;k++)
            {
                if(cnt == 1)
                    break;
                if(a[j][k] == '1')
                {
                    if(a[j][k+1] == '1'&&a[j+1][k] == '1'&&a[j+1][k+1] == '1')
                        cout <<"SQUARE" <<endl;
                    else
                        cout <<"TRIANGLE"<<endl;
                    cnt = 1;
                }
            }
            if(cnt == 1)
                break;
        }
        cnt = 0;
    }
    return 0;
}
