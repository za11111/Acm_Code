#include <bits/stdc++.h>

using namespace std;
long long a[103];

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {

        string s;
        cin>>s;
        int ans = 0;
        if(s.size()==1)
        {
            cout<<0<<endl;
            continue;
        }
        int index= 0;
        for(int i = s.size()-1;i >=0;i--)
        {
            if(s[i]=='0')
            {
                ans++;
            }
            else
            {
                index = i;
                break;
            }

        }//1
        int bns =0 ;
        for(int i =0;i < index;i++)
        {
            if(s[i]!='0')
                bns++;
        }
            cout<<bns + ans<<endl;
    }
}