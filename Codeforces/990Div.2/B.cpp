#include <bits/stdc++.h>
using namespace std;
map<int,int> b;
map<int,int> c;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        b.clear();
        c.clear();
       int n;
       cin>>n;
       string a;
       cin>>a;
       for(int i =0;i < n;i++)
       {
           b[a[i]-'a']++;
           c[a[i]-'a'] = i;
       }
        int fmax =INT_MIN;
       int fmin =INT_MAX;
       int index =0;
       int indexi =0;
        for(auto &[k,v]:b)
        {
           if(v < fmin)
           {
               fmin = v;
               index=k;
           }
            if(v>=fmax)
            {
                fmax = v;
                indexi=k;
            }
        }
        a[c[index]]=a[c[indexi]];
        cout<<a<<endl;
    }
}