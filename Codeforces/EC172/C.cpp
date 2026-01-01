#include <bits/stdc++.h>

using namespace std;
int cmp(int a,int b)
{
    return a > b;
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int> ans;
        long long sum =0;
        for(int i =n-1 ;i > 0;i-- )
        {
            if(s[i]-'0'==1)
                sum++;
            else
                sum--;
            if(sum >= 1)
                ans.push_back(sum);
        }
        sort(ans.begin(),ans.end(),cmp);
        long long bns =0;
        int i = 0;
        while(k > 0&&(i != ans.size()))
        {
            k-=ans[i];
            bns++;
            i++;
        }
        if(k > 0)
            cout<<-1<<endl;
        else
            cout<<bns+ 1<<endl;
    }
}