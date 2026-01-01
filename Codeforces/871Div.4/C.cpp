#include <bits/stdc++.h>
using namespace std;

int main ()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    int t;
    cin>>t;

    while(t--)
    { int j,k;
        j = k=0;
        int n;
        cin>>n;
        long long fmin1=INT_MAX;
        long long fmin2=INT_MAX;
        long long fmin3=INT_MAX;
        int ans =0;
        for(int i=0;i < n;i++)
        {

            long long tt;
            cin>>tt;
            string chr;
            cin>>chr;
            if(chr =="01")
            {
                fmin1 = min(tt,fmin1);
                j++;
            }
            else if(chr =="10")
            {
                fmin2 = min(tt,fmin2);
                k++;
            }
            else if(chr=="11")
            {
                fmin3=min(tt,fmin3);
                ans = 1;
            }
        }
        if(ans ==1||k!=0&&j!=0)
        {
            cout<<min(fmin3,fmin1+fmin2)<<endl;
        }
        else
            cout<<-1<<endl;
    }
}
