//
// Created by ZA on 2024/9/10.
//
#include <bits/stdc++.h>
using namespace std;
long long c[2003][2003];
long long ans[2003][2003];
int k;
void bulid()
{
    c[0][0] = 1;
    c[1][0] = c[1][1] = 1;
    for(int i = 2;i <= 2001;i++)
    {
        c[i][0] = 1;
        for(int j = 1;j <= i;j++)
        {
            c[i][j] = (c[i-1][j] + c[i-1][j-1])%k;
            ans[i][j] = ans[i-1][j] + ans[i][j-1]-ans[i-1][j-1];
            if(c[i][j] == 0) {
                ans[i][j]++;
            }
        }
        ans[i][i + 1] = ans[i][i];
    }
}
int main ()
{
    int t;
    cin>>t>>k;
    bulid();
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(m > n)
            cout<<ans[n][n];
        else
            cout<<ans[n][m];
        cout<<endl;
    }
    return 0;
}