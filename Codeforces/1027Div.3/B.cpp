#include <bits/stdc++.h>

using namespace  std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int jishu =0;
        for(int i = 0;i < n;i++)
        {
            if(s[i] == '1')
                jishu++;
        }
        int oushu = n-jishu;
        int buhao = n-k*2;
        jishu -=buhao/2;
        oushu -=buhao/2;
        if(jishu <0||oushu<0)
            cout<<"NO\n";
        else if(jishu/2+oushu/2==k)
        {
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";


    }
}