#include <bits/stdc++.h>

using namespace std;

int main ()
{
    string s;
    getline(cin,s);
    int t = s.find("GZU",0) ;
    int ans = 0;
    while(t != string::npos)
    {
        ans++;
        t = s.find("GZU",t+1);
    }
    if(ans ==0)
        cout<<"yezhulin\n";
    else if(ans%2==1)
        cout<<"heshangpo\n";
    else
        cout<<"qingrenpo\n";
}