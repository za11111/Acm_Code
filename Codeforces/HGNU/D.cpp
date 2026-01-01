#include <bits/stdc++.h>
using namespace std;
string a,b;
char ch[48][48];
int main ()
{
    int n,m;
    cin>>n>>m;
    for(int i =1;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
            cin>>ch[i][j];
        }
    }
    for(int i =1;i <= n;i++)
    {
        if(i%2==1) {
            for (int j = 1; j <= m; j++) {
                a+=ch[i][j];
            }
        }
        else
        {
            for (int j = m; j >=1; j--) {
                a+=ch[i][j];
            }
        }
    }
    int ans =0;
    for(int j = m;j >=1;j--)
    {
        if(ans ==0)
        {
            for(int i = n;i >= 1;i--)
            {
                b+=ch[i][j];
            }
            ans = 1;
        }
        else
        {
            for(int i =1;i <= n;i++)
            {
                b+=ch[i][j];
            }
            ans = 0;
        }
    }
    int fm = 0;
    int fa=0;
    int fb=0;
    for(int i= 0;i < a.size();i++)
    {
        for(int j = i+1;j < a.size();j++)
        {//abcabcd i=0 j=3 4
            if(j-i > a.size()-j)
                break;
            if(a[i] == a[j])
            {

                    int bns =0;
                    for(int k=1;k < j-i;k++)
                    {
                        if(a[i+k]!=a[j+k])
                            bns = 1;
                    }
                    if(bns == 0)
                    {
                        fa=max(fa,(j-i)*2);
                    }
            }
            else
                continue;
        }
    }
    for(int i= 0;i < b.size();i++)
    {
        for(int j = i+1;j < b.size();j++)
        {//abcabcd i=0 j=3 4
            if(j-i > b.size()-j)
                break;
            if(b[i] == b[j])
            {

                int bns =0;
                for(int k=1;k < j-i;k++)
                {
                    if(b[i+k]!=b[j+k])
                        bns = 1;
                }
                if(bns == 0)
                {
                    fb=max(fb,(j-i)*2);
                }
            }
            else
                continue;
        }
    }
    cout<<fa<<" "<<fb<<endl;
}