#include<bits/stdc++.h>

using namespace std;
struct cj
{
    int l,r,v;
}a[100003];
bool cmp (cj x, cj y)
{
    if(x.l == y.l)
    {
        if(x.r == y.r)
        {
            return x.v < y.v;
        }
        return x.r < y.r;

    }
    return x.l < y.l;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        for(int i = 0;i < n;i++)
        {
            cin>>a[i].l>>a[i].r>>a[i].v;
        }
        sort(a,a+n,cmp);
        for(int i = 0;i < n;i++)
        {
            if(k>=a[i].l&&k <=a[i].r)
            {
                if(k < a[i].v)
                    k = a[i].v;
            }
        }
        cout<<k<<endl;
    }
}