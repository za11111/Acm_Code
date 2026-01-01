#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s.size()==1)
        {
            cout<<1<<endl;
            continue;
        }
        int h = 0;
        for(int i = 0;i < s.size()-1;i++)
        {
                if(s[i]=='*'&&s[i+1]=='*'||s[i]=='>'&&s[i+1]=='<'||s[i]=='*'&&s[i+1]=='<'||s[i]=='>'&&s[i+1]=='*')
                {
                    h=1;
                    break;
                }
        }
        if(h == 1)
        {
            cout<<-1<<endl;
        }
        else
        {
            int ans =0 ;
            int bns = 0;
            for(int i = 0;i < s.size();i++)
            {
                if(s[i] =='>')
                {
                    break;
                }
                else
                    ans++;
            }
            for(int i = s.size()-1;i>=0;i--)
            {
                if(s[i] == '<')
                    break;
                else
                    bns++;
            }
            cout<<max(ans,bns)<<endl;
        }
    }
}
/*
11
*
**
<*
>*
>*>
<*<
>*<
<*>
<**>
<*<*
>*>*
*/