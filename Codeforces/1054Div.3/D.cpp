//
// Created by ZA on 2025/9/21.
//
#include <bits/stdc++.h>

using namespace std;
string s;
int n;
long long fa(char h)
{
    int l1,r1;
    char f = h;
    l1 = r1 =-1;
    for(int i = 0;i < n;i++)
    {
        if(s[i] == f)
        {
            l1 = i;
            break;
        }
    }
    for(int i = n - 1;i >= 0;i--)
    {
        if(s[i] == f)
        {
            r1 = i;
            break;
        }
    }
    if(l1 == -1||r1 == -1)
        return 0;
    if(l1 == r1)
        return 0;
    long long ans = 0;
    for(int i = l1 + 1;i < r1;i++)
    {
        if(s[i] != f)
        {
            if(i-l1 > r1-i)
            {
                ans += r1-i;
                r1--;

            }
            else
            {
                ans += i-l1;
                l1++;
            }
        }

    }
    return ans;
}
long long fa2(char h)
{
    int l1,r1;
    char f = h;
    l1 = r1 =-1;
    for(int i = 0;i < n;i++)
    {
        if(s[i] == f)
        {
            l1 = i;
            break;
        }
    }
    for(int i = n - 1;i >= 0;i--)
    {
        if(s[i] == f)
        {
            r1 = i;
            break;
        }
    }
    if(l1 == -1||r1 == -1)
        return 0;
    if(l1 == r1)
        return 0;
    long long ans = 0;
    for(int i = l1 + 1;i < r1;i++)
    {
        if(s[i] == f)
        {
            if(i-l1 > r1-i)
            {
                ans += r1-i+1;
                r1--;

            }
            else
            {
                ans += i-l1+1;
                l1++;
            }
        }

    }
    return ans+;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        cout<<min(min(fa('a'),fa('b')),min(fa2('a'),fa2('b')))<<endl;
    }

}
/*
2
9
abbbbabbb
9
baabbbaab




4
7
bbabbab
7
ababbab
7
abbaabb
7
abaaaba



*/