//
// Created by ZA on 2024/10/26.
//
#include <bits/stdc++.h>
using namespace  std;

struct  cj
{
    int w;
    int h;
}a[102];

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i;
        int fw,fh;
        fw=fh = 0;
        for(i =0;i < n;i++)
        {
            cin>>a[i].w>>a[i].h;
            if(a[i].w>fw)
            {
                fw = a[i].w;
            }
            if(a[i].h>fh)
            {
                fh = a[i].h;
            }

        }
        cout<<(fw+fh)*2<<endl;
    }
}