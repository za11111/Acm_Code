#include <bits/stdc++.h>

using namespace std;
long long a[100003];
long long my_ceil(long long x,long long y)
{
    if(x >= 0)
    {
        return (x+y -1) / y;
    }
    else
    {
        return x /y;
    }

}

int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        for(int i = 1;i <=n;i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+n+1);
        int index = my_ceil(n,2);
        long long sum = 1;
        for(int i = index + 1;i <= n;i++)
        {
            if(a[i] <a[index]+1)
            {
                sum++;

            }
        }
        cout<<sum<<endl;
    }
}