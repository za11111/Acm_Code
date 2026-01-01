#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n;
    cin>>n;
    string a;
    cin>>a;
    int m;
    cin>>m;
    int i;
    long long ans = 0;
    reverse(a.begin(),a.end());
    for(i = 0;i < a.size();i++)
    {
        if(a[i] >= 'A'&&a[i] <= 'F')
        {
            ans +=  pow(n,i)*(a[i] - 'A' + 10 );
        }
        else
        {
            ans += pow(n,i)*(a[i] - '0');
        }
    }
    string ch;
    int t;
    while(ans > 0)
    {
        t = ans % m;
        if(t >= 10)
        {
            char ss = t - 10 + 'A';
            ch.push_back(ss);
        }
        else
        {
            char ss = t +'0';
            ch.push_back(ss);
        }
        ans = ans / m;
    }
    reverse(ch.begin(),ch.end());
    cout<<ch;
}