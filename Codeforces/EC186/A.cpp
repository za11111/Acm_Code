//
// Created by ZA on 2025/12/29.
//
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;//2025
        if(s.find("2025") != string::npos)
        {
            if(s.find("2026")!= string::npos)
            {
                cout<<0<<endl;
            }
            else
            {
                cout<<1<<endl;
            }
        }
        else
        {
            cout<<0<<endl;
        }
    }
}