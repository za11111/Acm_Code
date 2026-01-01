//
// Created by ZA on 2025/5/24.
//
#include <bits/stdc++.h>

using namespace  std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        stack<char> st;
        string s;
        cin>>s;
        int ans = 0;
        for(int i=0;i < s.size();i++)
        {
            //st.push(s[i]);
            if(i==0)
                st.push(s[i]);
            else
            {
                if(!st.empty())
                {
                    if(s[i]!=st.top())
                        st.pop();
                    else
                        st.push(s[i]);
                }
                else
                    ans++;
            }
        }
        if(ans<1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}