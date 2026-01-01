#include<bits/stdc++.h>

using namespace std;
long long p[100003];
long long s[100003];
long long a[100003];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int bns = 0;
        for(int i = 1 ; i<= n;i++)
        {
            cin>>p[i];
        }
        for(int i = 1 ; i<= n;i++)
        {
            cin>>s[i];

        }
        if(n==1)
        {
            if(p[1] == s[1])
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else
        {

            for(int i = 1; i <= n-1;i++)
            {
                if(gcd(p[i],s[i+1]) == s[1])
                {
                }
                else
                {
                    bns = 1;
                    break;
                }
            }
            if(p[n] != s[1])
                bns= 1;
            if(bns == 0)
            {
                cout<<"YES\n";
            }
            else
                cout<<"NO\n";
        }


    }
}