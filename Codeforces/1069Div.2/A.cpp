#include <bits/stdc++.h>
using namespace std;
int a[103];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int dir[10003];
        set<int> st;
        for(int i = 0;i < n;i++)
        {
            cin>>a[i];
            st.insert(a[i]);
        }
        int fmax = 1e9;
        for(int i = 0;i < n;i++)
        {
            if(a[i] >=st.size()&&a[i] < fmax)
            {
                fmax=  a[i];
            }
        }
        long long x = 1e18;
        cout<<fmax<<endl;

    }
}