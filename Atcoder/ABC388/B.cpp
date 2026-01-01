#include <bits/stdc++.h>

using namespace std;
struct cj
{
    long long l;
    long long r;
    long long ans;
}a[102];
int main ()
{
  int n,d;
  cin>>n>>d;
  for(int i =0; i< n;i++)
  {
      cin>>a[i].l>>a[i].r;
    a[i].ans = a[i].l*a[i].r;
  }
  for(int i = 0;i < d;i++)
  {
      long long fmax = -1e9;
      for(int j =0;j < n;j++)
      {
          a[j].r++;
          a[j].ans = a[j].l*a[j].r;
          fmax =max(fmax,a[j].ans);
      }
    cout<<fmax <<endl;
  }

}