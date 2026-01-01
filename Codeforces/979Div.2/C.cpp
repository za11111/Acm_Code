#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a;
        cin>>a;
        int i;
        if(a[0]=='1'||a[a.size()-1]=='1')
        {
            cout<<"YES"<<endl;
            continue;
        }
        int ans =0;
        for(i =0;i<n;i++)
        {
            if(a[i] =='1') {
                if ((i > 0 and a[i - 1] == '1') or (i < n - 1 and a[i+1] == '1')) {
                    ans = 1;
                    break;
                }
            }
        }
        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}