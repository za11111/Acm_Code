#include <bits/stdc++.h>

using namespace std;
struct cj
{
    long long heart;
    long long radius;
}a[200003];
map<long long ,long long > mp;
int cmp (cj a,cj b)
{

    if(a.radius == b.radius)
        return a.heart > b.heart;
    return a.radius < b.radius;
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        mp.clear();
      int n,m;
      cin>>n>>m;
      for(int i =0;i< n;i++)
      {
          cin>>a[i].heart;
      }
      for(int i = 0;i < n;i++)
      {
          cin>>a[i].radius;
      }
      //sort(a,a+n,cmp);
      for(int i = 0; i < n;i++)
      {
        for(int j = a[i].heart - a[i].heart ;j <=a[i].radius + a[i].heart;j++ )
        {
            long long y = sqrt((a[i].radius * a[i].radius)- (a[i].heart-j)*(a[i].heart-j));
            mp[j] = max(mp[j],y);
        }
      }
      long long sum =0;
      for(auto &[k,v]:mp)
      {
          sum+=v*2+1;
      }
      cout<<sum<<endl;
    }
}