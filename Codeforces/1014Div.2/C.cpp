#include <bits/stdc++.h>

using namespace std;
long long a[200003];

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int jishu ,oushu;
        jishu  = oushu = 0;
        int n;
        cin>>n;
        long long fmax =0 ;
        long long sum = 0;
        for(int i =0;i < n;i++)
        {
            cin>>a[i];
            if(a[i]%2==1) {
                jishu++;

            }
            else
                oushu++;
            fmax= max(a[i],fmax);
            sum+=a[i];
        }

        if(oushu == 0||jishu == 0)
        {
            cout<<fmax<<endl;
            continue;
        }
        else
        {
            cout<<sum-jishu+1<<endl;
        }
    }
}