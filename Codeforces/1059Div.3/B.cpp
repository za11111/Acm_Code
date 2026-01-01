
#include <bits/stdc++.h>

using namespace  std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> a;
        //cout<<s.size()-1<<endl;
        int ans = 0;
        for(int i =0;i < s.size();i++)
        {
            if(s[i] =='0')
            {
                ans++;
                a.push_back(i+1);
            }
            //cout<<i<<' ';
        }
        cout<<a.size()<<endl;
        for(int i = 0;i < a.size();i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;

    }
}