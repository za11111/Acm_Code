#include <bits/stdc++.h>

using namespace std;
vector<string> a;
int main () {
    int t;
    cin>>t;
    while(t--)
    {
        a.clear();
        int n,m;
        cin>>n>>m;
        //a.push_back("1");
        for(int i =0 ;i < n;i++)
        {
            string dd;
            cin>>dd;

            a.push_back(dd);
        }
        //string s;
        int ans =0;
        for(int i =0 ;i < min(m,n)/2;i++)
        {
            string s;
            for(int j = i;j < m-i;j++)
            {
                s+=a[i][j];
            }
            for(int k = i+1;k <n-i;k++)
            {
                s+=a[k][m-i-1];
            }
            for(int j = m-i-1-1;j >=i;j--)
            {
                s+=a[n-i-1][j];
            }
            for(int k = n-i-2;k >=i+1;k--)
            {
                s+=(a[k][i]);
            }
            int size=s.size();
            s=s+s;
            int tt = s.find("1543");
            while(tt!=string::npos)
            {
                if(tt >size-1)
                    break;
                ans++;
                tt = s.find("1543",tt+3);
                if(tt >size-1)
                    break;
            }
        }
        cout<<ans<<endl;
    }

}