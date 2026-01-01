//
// Created by ZA on 2025/9/21.
//
#include <bits/stdc++.h>

using namespace std;
//long long a[200003];
string s;
int n;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        vector<int> a;
        vector<int> b;
        for(int i =0;i < n;i++)
        {
            if(s[i] == 'a')
            {
                a.push_back(i+1);
            }
            else
            {
                b.push_back(i+1);
            }
        }
        long long ans = 0;
        long long bns = 0;
        for(int i =0;i < a.size();i++)
        {
            ans+=abs(a[a.size()/2]-a[i]);
        }
        for(int i =0;i < b.size();i++)
        {
            bns+=abs(b[b.size()/2]-b[i]);
        }
        cout<<min(ans,bns)<<endl;
    }

}
/*
2
9
abbbbabbb
9
baabbbaab




1
7
bbabbab





*/