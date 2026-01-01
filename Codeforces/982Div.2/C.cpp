#include <bits/stdc++.h>
using namespace  std;
long long a[300003];
long long b[300003];
int dir[300003];
int n;
long long  dfs(long long ans)
{
    long long fmax =0;
    long long sum = 0;
    for(int i =0;i < n;i++)
    {
        if(dir[i])
            continue;
        if(b[i]==ans)
        {
            sum+=i;
            b[i] = 1;
            long long tt = dfs(ans+i);
            sum+=tt;

            fmax = max(sum,fmax);
            sum-=i;
            sum-=tt;
        }
    }
    return fmax;
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(dir,0,sizeof(dir));

        cin>>n;
        long long sum  =0;
        for(int i = 0;i < n;i++)
        {
            cin>>a[i];
            b[i] = a[i]+i;
        }
        dir[0] = 1;
        long long fmax= 0;
        for(int i =1 ;i < n;i++)
        {
            if(b[i] < n)
            {
                dir[i] = 1;
                continue;
            }
            if(b[i] == n)
            {
                sum+=i;

                dir[i]= 1;
                long long tt = dfs(n+i);
                sum += tt;
                fmax = max(fmax,sum);
                sum-=tt;
                sum-=i;
                dir[i]=0;
            }
        }

        cout<<fmax+n<<endl;

//        2 5 8 5 9;
//        0 1 2 3 4
//        5 5 6 8 5
//        0 1 2 3 4

    }
}
