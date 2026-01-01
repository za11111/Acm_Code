#include <bits/stdc++.h>
using namespace  std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        if(k > max(n,m))
        {
            cout<<-1<<endl;
            continue;
        }
        else if(max(n,m)-min(m,n) <= k)
        {
            if(max(n,m)==n)
            {
                int ans = 0;
                for(int i =0;i < k;i++)
                {
                    cout<<0;
                }
                n = n - k;
                int nn;
                int mm;
                nn = mm = 0;
                for(int i =0;i < m+n;i++)
                {
                    if(i%2==0)
                    {
                        if(m > mm)
                        {
                            cout<<1;
                            mm++;
                        }
                        else
                        {
                            cout<<0;
                            nn++;
                        }
                    }
                    else
                    {
                        if(n > nn)
                        {
                            cout<<0;
                            nn++;
                        }
                        else
                        {
                            cout<<1;
                            mm++;
                        }
                    }
                }
            }
            else
            {
                for(int i =0;i < k;i++)
                {
                    cout<<1;
                }
                m = m - k;
                int nn;
                int mm;
                nn = mm = 0;
                for(int i =0;i < m+n;i++)
                {
                    if(i%2==0)
                    {
                        if(n > nn)
                        {
                            cout<<0;
                            nn++;
                        }
                        else
                        {
                            cout<<1;
                            mm++;
                        }
                    }
                    else
                    {if(m > mm)
                        {
                            cout<<1;
                            mm++;
                        }
                        else
                        {
                            cout<<0;
                            nn++;
                        }

                    }
                }
            }
            cout<<endl;
        }
        else
            cout<<"-1\n";
    }

}
