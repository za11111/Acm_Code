
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define  IOS ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main ()
{
    IOS;
    int t;
    cin>>t;
    while(t--) {

        int haha  = -1;
        long long n,m,i1,j1,i2,j2;
        cin>>n>>m>>i1>>j1>>i2>>j2;
        string s1;
        cin>>s1;
        if(i1==1&&j1==1)
        {
            if(s1=="DL"||s1=="UR")
            {
                cout<<-1<<endl;
                continue;
            }
        }
        if(i1==n&&j1==m)
        {
            if(s1=="DL"||s1=="UR")
            {
                cout<<-1<<endl;
                continue;
            }
        }
        if(i1==n&&j1==1)
        {
            if(s1=="DR"||s1=="UL")
            {
                cout<<-1<<endl;
                continue;
            }
        }
        if(i1==1&&j1==m)
        {
            if(s1=="DR"||s1=="UL")
            {
                cout<<-1<<endl;
                continue;
            }
        }
        string s2;
        s2 = s1;
        long long  oi,oj;
        oi = i1;
        oj = j1;
        int op=0;
        long long ii,jj;
        int ans = 0;
        int jishu = 0;
        while(1)
        {
            haha++;
            if (s1 == "DR")
            {
                if (n - i1 == m - j1)
                {
                    op = m - j1;
                    if(i2-i1==j2-j1 &&i2-i1 <=op&&i2-i1>=0)
                    {
                        //ans++;
                        cout<<ans<<endl;
                        break;
                    }
                    s1 = "UL";

                    i1 = i1 + op;
                    j1 = j1 + op;

                }
                else if (n - i1 > m - j1)
                {
                    op = m - j1;
                    if(i2-i1==j2-j1 &&i2-i1 <=op&&i2-i1>=0)
                    {
                        //ans++;
                        cout<<ans<<endl;
                        break;
                    }
                    s1 = "DL";
                    i1 = i1 + op;
                    j1 = j1 + op;

                }
                else
                {
                    op = n-i1;
                    if(i2-i1==j2-j1 &&i2-i1 <=op&&i2-i1>=0)
                    {
                       // ans++;
                        cout<<ans<<endl;
                        break;
                    }s1 = "UR";

                    i1 = i1+op;
                    j1 = j1+op;
                }

                if (i1 == 1&&j1==1||i1==n&&j1==m||i1==1&&j1==m||i1==n&&j1==1)
                {

                    if(haha >=1)
                    {
                    cout << -1 << endl;
                    break;
                    }
                }
                ans++;
            }
            else if (s1 == "DL")
            {
                if(n-i1 == j1-1)
                {
                    op = j1;
                    if(i2-i1==j1-j2 &&i2-i1 <=op&&i2-i1>=0)
                    {
                        // ans++;
                        cout<<ans<<endl;
                        break;
                    }s1 = "UR";

                    j1 = j1-op;
                    i1 = i1+op;

                }
                else if (n-i1 > j1-1)
                {
                   op = j1-1;
                    if(i2-i1==j1-j2 &&i2-i1 <=op&&i2-i1>=0)
                    {
                       // ans++;
                        cout<<ans<<endl;
                        break;
                    }s1 = "DR";

                   j1 = j1-op;
                   i1 = i1+op;

                }
                else
                {
                    op = n-i1;
                    if(i2-i1==j1-j2 &&i2-i1 <=op&&i2-i1>=0)
                    {
                        //ans++;
                        cout<<ans<<endl;
                        break;
                    }
                    s1 = "UL";

                    i1 = i1+op;
                    j1 = j1-op;
                }
                if (i1 == 1&&j1==1||i1==n&&j1==m||i1==1&&j1==m||i1==n&&j1==1)
                {

                    if(haha >=1)
                    {
                        cout << -1 << endl;
                        break;
                    }
                }
                ans++;
            }
            else if (s1 == "UR")
            {
                if (i1-1 == m-j1)
                {
                    op = i1-1;
                    if(i1-i2==j2-j1 &&i1-i2 <=op&&i1-i2>=0)
                    {
                        // ans++;
                        cout<<ans<<endl;
                        break;
                    }
                    s1 = "DL";

                    i1 = i1-op;
                    j1 = j1+op;

                }
                else if (i1-1 < m-j1)
                {
                    op = i1-1;
                    if(i1-i2==j2-j1 &&i1-i2 <=op&&i1-i2>=0)
                    {
                       // ans++;
                        cout<<ans<<endl;
                        break;
                    }
                    s1 = "DR";

                    i1 = i1-op;
                    j1 = j1+op;

                }
                else
                {
                    op = m-j1;
                    if(i1-i2==j2-j1 &&i1-i2 <=op&&i1-i2>=0)
                    {
                        //ans++;
                        cout<<ans<<endl;
                        break;
                    }
                    s1 = "UL";

                    i1 = i1-op;
                    j1 = j1+op;

                }
                if (i1 == 1&&j1==1||i1==n&&j1==m||i1==1&&j1==m||i1==n&&j1==1)
                {

                    if(haha >=1)
                    {
                        cout << -1 << endl;
                        break;
                    }
                }
                ans++;
            }
            else if(s1=="UL")
            {
                if (i1-1 == j1 -1 )
                {
                    op = j1-1;
                    if(i1-i2==j1-j2 &&i1-i2 <=op&&i1-i2>=0)
                    {
                        // ans++;
                        cout<<ans<<endl;
                        break;
                    }
                    s1 = "DR";

                    i1 = i1-op;
                    j1 = j1-op;

                }
                else if (i1-1 > j1 -1 )
                {
                    op = j1-1;
                    if(i1-i2==j1-j2 &&i1-i2 <=op&&i1-i2>=0)
                    {
                       // ans++;
                        cout<<ans<<endl;
                        break;
                    }
                    s1 = "UR";

                    i1 = i1-op;
                    j1 = j1-op;

                }
                else
                {
                    op = i1-1;
                    if(i1-i2==j1-j2 &&i1-i2 <=op&&i1-i2>=0)
                    {
                        //ans++;
                        cout<<ans<<endl;
                        break;
                    }
                    s1 ="DL";

                    i1 = i1-op;
                    j1 = j1-op;

                }

                if (i1 == 1&&j1==1||i1==n&&j1==m||i1==1&&j1==m||i1==n&&j1==1)
                {

                    if(haha >=1)
                    {
                        cout << -1 << endl;
                        break;
                    }
                }
                ans++;
            }
        }
    }
}