#include <bits/stdc++.h>

using namespace std;


int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        long long T,I,L;
        T = I = L  =0;
        for(int i =0 ;i < n;i++)
        {
            if(s[i] == 'T')
                T++;
            if(s[i] == 'I')
                I++;
            if(s[i] == 'L')
                L++;
        }
        if(T==I&&T==L)
        {
            cout<<0<<endl;
            continue;
        }
        if(T==n||L==n||I==n)
        {
            cout<<-1<<endl;
            continue;
        }
        long long cishu = 0;
        char ch;
        if(T >= L&&T >= I) {
            ch = 'T';
            cishu = T*2-L-I;
        }
        else  if(L >= T&&L >= I) {
            ch = 'L';
            cishu = L*2-T-I;
        }
        else {
            ch = 'I';
            cishu = I*2-L-T;
        }
        for(int i=0;i < n-1;i++)
        {
            if(s[i]=='T')
        }
    }
}