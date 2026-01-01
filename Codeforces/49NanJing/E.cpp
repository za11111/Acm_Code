#include <bits/stdc++.h>
/*
4
21 10
jingicpcnanjingsuanan
21 0
jingicpcnanjingsuanan
21 3
nanjingnanjingnanjing
4 100
icpc
*/
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        int fm = 0;
        int ans = 0;
        b = min(b,7);
        for(int i =0;i <=min(a,b);i++)
        {//anjingn
            string s1,s2;
            string ss;
            int ans = 0;
            s1 = s.substr(0,i);
            s2 = s.substr(i);
            ss = s2+s1;
            int ops = 0;
            int weizhi = ss.find("nanjing",ops);
            while(weizhi!= string::npos)
            {
                ans++;
                ops = weizhi+7;
                weizhi = ss.find("nanjing",ops);
                //ss = ss.substr()
            }
            fm = max(ans,fm);
        }
        cout<<fm<<endl;
    }
}