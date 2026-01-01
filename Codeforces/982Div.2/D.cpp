#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long ans = 0;
    if(n <=2)
    {
        if(n==1)
            cout<<2;
        if(n==2)
            cout<<3;
    }
    else
    {
        long long a,b,c;
        a = n/3;
        c = n%3;
        b = n-a*2;
        ans +=a*3;
        if(c == 0)
        {
            if(b%2==0)
                cout<<ans+b/2;
            else
                cout<<ans + b/2+1;
        }
        else if(c == 1)
        {
            b = b-2;
            ans+=2;
            if(b%2==0)
                cout<<ans+b/2;
            else
                cout<<ans + b/2+1;
        }
        else if(c == 2)
        {
            b = b-1;
            ans+=2;
            if(b%2==0)
                cout<<ans+b/2;
            else
                cout<<ans + b/2+1;
        }
    }

}
//2:1
//1:2
//3:3:2
//1:1:
//2:2
//
//
//
//
//3*333 = 999
//999:999:666
//999+1+1
//1000:1000:668
//332/2+1001
//166

3:3:2
1:0:1
0:1:1
