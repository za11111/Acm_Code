#include <bits/stdc++.h>
using namespace  std;
struct cj
{
    long long b;
    long long index = 0;
};
vector<cj> vt;
vector<cj> vtt;
int cmp(cj  x, cj y)
{
    return x.b > y.b;
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      for(int i =0;i < n;i++)
      {
          int tt;
          cin>>tt;
          vt.push_back({tt,i});
      }
      vtt = vt;
      sort(vt.begin(),vt.end(),cmp);
      for(int i =0;i < n;i++)
      {
          vtt[vt[i].index].index = i ;
      }

    }
}