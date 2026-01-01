#include <bits/stdc++.h>
using namespace std;
long long a[2003];
long long chafen[2003];
int cmp(long long a, long long b)
{
    return a > b;
}
int main ()
{
   int t;
   cin>>t;
   while(t--)
   {
       memset(chafen,0, sizeof(chafen));
       int n;
       cin>>n;
       for(int i =0;i < n;i++)
       {
           cin>>a[i];

       }

       if(n==1)
           cout<<1<<endl;
       else if(n%2 == 0)
       {
           sort(a,a+n);
           long long fmax= 0;
           for(int i =0;i < n-1;i++)
           {
               fmax = max(fmax,a[i+1]-a[i]);
               i++;
           }
           cout<<fmax <<endl;
       }
       else
       {long long fmin = LONG_LONG_MAX;
           long long fmax = 1;
           for(int i =0;i < n;i++)
           {
                if(i%2==1)
                    continue;
                else
                {
                    fmax = 1;
                    for(int j = 0;j < n-1;)
                    {

                        if(j==i||j+1==i)
                        {
                            j++;
                            continue;
                        }
                        else
                        {

                            fmax = max(fmax,a[j+1]-a[j]);
                            j+=2;
                        }

                    }
                    fmin = min (fmin,fmax);
                }
           }
           cout<<fmin<<endl;
       }


   }// 4 3 3 2
}//4 3 2 3