#include <bits/stdc++.h>

using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        cin>>a>>b;
        long long sum = 0;
        int i =0;
        int ans = 0;
            for(i = 0;i < max(b.size(),a.size());i++)
            {
                if(a[i] == b[i])
                {
                    sum++;
                    ans = 1;
                }
                else
                {
                    break;
                }
            }
            cout<<sum+(a.size()-sum) + (b.size()-sum)+ans;

        cout<<endl;
    }
}