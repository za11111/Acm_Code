
#include <bits/stdc++.h>

using namespace  std;
int a[200003];
int k,x,n;
bool check(int mid)
{
    if(mid == 0)
        return true;
    int sum = 0;
    sum += max(0,a[0]-mid+1);
    sum += max(0,n-a[n-1]-mid+1);
    for(int i = 1;i < n;i++)
    {
        sum+=max(0,(a[i]-a[i-1])/mid-1);
    }
    if(sum >=k)
        return true;
    else
        return false;
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {

        cin>>n;
        cin>>k>>x;
        priority_queue<tuple<int,int,int>> pr;
        for(int i =0;i < n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int l,r,mid,ans;;
        l = 0;
        r = x;
        while(l <= r)
        {
            mid = l+r>>1;
            if(check(mid))
            {
                l = mid + 1;
                ans = mid;
            }
            else
            {
                r = mid - 1;
            }
        }
        if(ans == 0)
        {
            for(int i =0;i < k;i++)
            {
                cout<<i<<' ';
            }
            cout<<endl;
        }
        else
        {
            int now = 0;
            int i = 0;
            while(k--)
            {
                if(i == n)
                {
                    cout<<now<<' ';
                    now+=ans;
                    continue;
                }
                while(now+ans >a[i])
                {
                    now = a[i]+ans;
                    i++;
                    if(i == n)
                    {
                        now = a[i]+ans;
                        break;
                    }
                }
                if(i == n)
                {
                    cout<<now<<' ';
                    now+=ans;
                }
                else
                {
                    cout<<now<<' ';
                    now+=ans;
                }


            }
            cout<<endl;
//            for(int i = 0;i < a[0]/ans;i++)
//            {
//                cout<<0+i*ans<<' ';
//            }
//            for(int i =n;i > (n-a[n-1])/ans;i--)
//            {
//                cout<<n-i*ans<<' ';
//            }
//            for(int i = 1;i < n;i++)
//            {
//                if((a[i]-a[i-1]) / ans >=1)
//                {
//                    for(int j = 0;j < (a[i]-a[i-1])/ans;j++)
//                    {
//                        cout<<a[i-1]+(j+1)*ans<<' ';
//                    }
//                }
//            }
        }

       // cout<<ans<<endl;
    }
}