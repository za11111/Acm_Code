#include <bits/stdc++.h>
using namespace std;
long long m = 998244353;
long long dp[52][52][52][52];
long long a,b,c,d;
long long pp1,pp2,pp3,pp4;
long long nn;
long long fastpow(long long a,long long b,long long mod)
{
    long long ans = 1;
    a = a % mod;
    while(b)
    {
        if(b & 1)
            ans = ans * a % mod;//??
        a = a * a % mod;//??2 4 8 16
        b = b >> 1;//??
    }
    return ans;
}
long long mod_inverse(long long a)
{
    return fastpow(a,m - 2,m);
}

int main ()
{

    cin>>a>>b>>c>>d;
    int q;
    cin>>q;
    long long n = a+b+c+d;
    dp[0][0][0][0] = 0;
    if(!(a-1)&!b&!c&!d)
        dp[1][0][0][0] =a * mod_inverse(n*4) % m;
    else if((!(a-1)&!b&!c&d) | (!(a-1)&!b&c&!d) | (!(a-1)&b&!c&!d) | ((a-1)&!b&!c&!d))
        dp[1][0][0][0] =a * mod_inverse(n*4*4) % m;
    else
        dp[1][0][0][0] =3 * a * mod_inverse(n*4*4) % m;

    if(!a&!(b-1)&!c&!d)
        dp[0][1][0][0] =b * mod_inverse(n*4) % m;
    else if((!a&!(b-1)&!c&d) | (!a&!(b-1)&c&!d) | (!a&(b-1)&!c&!d) | (a&!(b-1)&!c&!d))
        dp[0][1][0][0] =b * mod_inverse(n*4*4) % m;
    else
        dp[0][1][0][0] =3 * b * mod_inverse(n*4*4) % m;

    if(!a&!b&!(c-1)&!d)
        dp[0][0][1][0] =c * mod_inverse(n*4) % m;
    else if((!a&!b&!(c-1)&d) | (!a&!b&(c-1)&!d) | (!a&b&!(c-1)&!d) | (a&!b&!(c-1)&!d))
        dp[0][0][1][0] =c * mod_inverse(n*4*4) % m;
    else
        dp[0][0][1][0] =3 * c * mod_inverse(n*4*4) % m;

    if(!a&!b&!c&!(d-1))
        dp[0][0][0][1] =d * mod_inverse(n*4) % m;
    else if((!a&!b&!c&(d-1)) | (!a&!b&c&!(d-1)) | (!a&b&!c&!(d-1)) | (a&!b&!c&!(d-1)))
        dp[0][0][0][1] =d * mod_inverse(n*4*4) % m;
    else
        dp[0][0][0][1] =3 * d * mod_inverse(n*4*4) % m;
    for(int i = 0;i <= a;i++)
    {
        for(int j = 0;j <= b;j++)
        {
            for(int k = 0;k <= c;k++)
            {
                for(int l = 0;l <= d;l++)
                {
                    if(dp[i][j][k][l])
                        continue;
                    dp[i][j][k][l] = (dp[i-1][j][k][j] * i * mod_inverse(n*4) % m+
                                      dp[i][j-1][k][l] * j * mod_inverse(n*4) % m+
                                      dp[i][j][k-1][l] * k * mod_inverse(n*4) % m+
                                      dp[i][j][k][l-1] * l * mod_inverse(n*4) % m)% m;
                }
            }
        }
    }

    while(q--)
    {
        int p1,p2,p3,p4;
        cin>>p1>>p2>>p3>>p4;
        cout<<dp[p1][p2][p3][p4]<<endl;
    }
}