#include <bits/stdc++.h>

using namespace std;
long long a[100003];
long long b[100003];
int n,k;
bool check(long long mid)
{
    for(int i = 1;i<=n;i++)
    {
        b[i] = a[i];
    }

    int ans = k;
    long long need = 0;
    long long damage = mid;
    for(int i = 1 ;i <= n;i++)
    {
        if(b[i] >=0)
        {
            need = (b[i]+damage)/damage;
            b[i] = b[i]-need*damage;
            if(ans >= need)
            {
                ans -= need;
                for(int j=i+1;j<=n;j++)
                {
                    if(damage-(j-i)*(j-i)<=0)
                        break;
                    b[j] =b[j]-need*( damage-(j-i)*(j-i));
                }
            }
            else
            {
                return false;
            }
        }
    }

    return true;
}
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   cin>>n>>k;
   for(int i= 1; i <=n;i++)
   {
       cin>>a[i];
   }
   long long l,r,mid,ans;
   l = 1;
   r = 1e18;
   while(l <= r)
   {
       mid = l+r>>1;
       if(check(mid))
       {
           r = mid - 1;
           ans = mid;
       }
       else
           l = mid + 1;
   }
   cout<<ans<<endl;
}