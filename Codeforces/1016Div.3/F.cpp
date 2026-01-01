#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<bool> dir(n,false);
        vector<string > s(n);
        //string s;
        for(int i= 0;i < n;i++)
        {
            //string ss;
            cin>>s[i];
            //s.push_back(ss);
        }
        long long fmax= 0;
        //cin>>s;
        for(int i =0;i< m;i++)
        {
            long long ans = 0;
            vector<string> s1(n);
            for(int j =0;j < n;j++)
            {
                cin>>s1[j];
                if(s1[j]==s[j])
                {
                    dir[j]=true;
                    ans++;
                }
            }
            fmax = max(fmax,ans);
        }
        int bns =0;
        for(int i =0;i < n;i++)
        {
            if(dir[i] == 0)
            {
                bns = 1;
                break;
            }
        }
        if(bns==1)
        {
            cout<<"-1\n";
        }
        else
        {
            cout<<3*n-2*fmax<<endl;
        }
    }
}
