#include <bits/stdc++.h>

using namespace std;

int  main ()
{
    int n,q;
    cin>>n>>q;
    map<string,string> mp;
    for(int i = 0;i < n;i++)
    {
        string s1,s2;
        cin>>s1>>s2;
        mp[s1]=s2;
    }
    while(q--)
    {
        string a1,a2,a3,a4,a5;
        cin>>a1>>a2>>a3>>a4>>a5;
        for(auto &[k,v]:mp)
        {
            if(k==a1)
            {
                if(v == a2)
                    cout<<"A\n";
                else if(v ==a3)
                    cout<<"B\n";
                else if(v == a4)
                    cout<<"C\n";
                else if(v == a5)
                    cout<<"D\n";
            }
        }
    }
}