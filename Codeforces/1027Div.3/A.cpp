#include <bits/stdc++.h>

using namespace  std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l1,l2,l3;
        string s;
        cin>>s;
//        l1 = (s[0]-'0')*10+(s[1]-'0');
//        l2 = (s[2]-'0')*10+(s[3]-'0');
        l3 = (s[0]-'0')*1000+(s[1]-'0')*100+(s[2]-'0')*10+(s[3]-'0');
        if( (int)(sqrt(l3)* (int)sqrt(l3) == l3))
        {
            cout<<(int )sqrt(l3)<<' '<<0<<endl;
        }
        else
            cout<<-1<<endl;

    }
}