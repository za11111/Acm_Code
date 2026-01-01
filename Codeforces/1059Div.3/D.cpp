
#include <bits/stdc++.h>

using namespace  std;
long long query(int a,int b,int c)
{
    long long ans = 0;
    cout<<a<<' '<<b<<' '<<c<<endl;
    cout.flush();
    cin>>ans;
    return ans;
}

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       long long s1;
       long long s2;
       s1 =query(1,1,n);
       s2 =query(2,1,n);
       long long s3 = s2-s1;
       int l = 1;
       int r = n;
       int mid = r;
       int ans =0;
       while(l <=r)
       {
           mid = l+r >> 1;
           long long h1;
           long long h2;
           h1 = query(1,l,mid);
           h2 = query(2,l,mid);
           if(h1 == h2)
           {
               l = mid+1;
           }
           else
           {
               ans = mid;
               r = mid;
               if(l==r)
                   break;
           }
       }
       cout<<"! "<<ans<<' '<< ans+s3-1<<endl;
        cout.flush();
    }
}