
#include <bits/stdc++.h>

using namespace  std;
long long a[100003];
long long gcd(long long a, long long b)
{
    return b ? gcd(b, a % b) : a;
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans = 0;
        for(int i = 0;i < n;i++)
        {
            cin>>a[i];
            if(a[i] %2 ==1)
                ans = 1;
        }
        if(ans == 1)
        {
            cout<<2<<endl;
        }
        else
        {
            int bns= -1;
            for(int i = 3;i < 65;i+=2)
            {
                for(int j = 0;j < n;j++)
                {
                    if(gcd(i,a[j]) != 1)
                        continue;
                    else
                    {
                        bns = i;
                        break;
                    }
                }
                if(bns != -1)
                {
                    break;
                }
            }
            cout<<bns<<endl;
        }
    }
}