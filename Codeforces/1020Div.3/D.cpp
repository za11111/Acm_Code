#include <bits/stdc++.h>
using namespace std;
long long a[200003];
long long b[200003];
int n,m;
int check(long long mid)
{
    int i =0;
    bool ans  =false;
    for(int j =0;j < m;j++)
    {
        while(i < n&&a[i] < b[j])
        {
            i++;
        }
        if(i < n)
        {
            i++;
        }
        else
        {
            if(ans || mid < b[j])
                return 0;
            ans = true;
        }
    }
    return 1;

}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long fmax = 0;
        cin>>n>>m;
        for(int i =0;i < n;i++)
        {
            cin>>a[i];
        }
        for(int i = 0;i < m;i++)
        {
            cin>>b[i];
            fmax= max(b[i],fmax);
        }
        if(check(0))
        {cout<<0<<endl;
            continue;
        }

        if(check(fmax))
        {}
        else
        {
            cout<<-1<<endl;
            continue;
        }

            long long l,r,mid;
            l = 0;
            r = fmax;
            int bns = 0;

            while(l <= r)
            {
                mid = l+r >>1;
                if(check(mid) )
                {
                    bns = mid;
                    r = mid - 1;
                }
                else
                    l = mid + 1;
            }
           cout<<bns<<endl;

    }
}
