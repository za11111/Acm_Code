//
// Created by yjh on 2025/11/14.
//
#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    if(n == 1)
    {
        cout << 1 << '\n';
        return;
    }
    bool check1 = true, check2 = true, check3 = true;
    for(int i = 0; i < n; i++)
    {
        if (s[i] != '<')
        {
            check1 = false;
        }
        if (s[i] != '>')
        {
            check2 = false;
        }
        if (s[i] != '*')
        {
            check3 = false;
        }
    }
    if(check1 || check2 || check3)
    {
        cout << -1 << '\n';
        return;
    }
    for(int i = 0; i < n - 1; i++)
    {
        if (s[i] == '>' && s[i + 1] == '<')
        {
            cout << -1 << '\n';
            return;
        }
        if(s[i] == '*' && s[i + 1] == '*')
        {
            cout << -1 << "\n";
            return;
        }
        if(s[i] == '*' && s[i + 1] == '<')
        {
            cout << -1 << "\n";
            return;
        }
        if(s[i] == '>' && s[i + 1] == '*')
        {
            cout << -1 << "\n";
            return;
        }
    }
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '<')
        {
            count = max(count, i + 1);
        }
        else if(s[i] == '>')
        {
            count = max(count, n - i);
        }
        else
        {
            count = max(count, i + 1);
            count = max(count, n - i);
        }
    }
    cout << count << '\n';
}

int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        solve();
    }
}