
#include <bits/stdc++.h>
using namespace  std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int ans =0;
       for(int i =0;i < n;i++)
       {
           if((n-i*2) % 4 ==0&&n-i*2>=0)
            ans++;
       }
       cout<<ans<<endl;

    }
}
