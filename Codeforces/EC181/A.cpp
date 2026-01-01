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
        sort(s.begin(),s.end());
        for(int i = 0 ;i < s.size();i++)
        {
            if(s[i] == 'N'||s[i] == 'F')
                continue;
            else
                cout<<s[i];
        }
        for(int i = 0 ;i < s.size();i++)
        {
            if(s[i]=='N')
                cout<<s[i];
        }
        for(int i = 0 ;i < s.size();i++)
        {
            if(s[i]=='F')
                cout<<s[i];
        }
       cout<<endl;
    }
}
//FTT  NTT
//TTNF