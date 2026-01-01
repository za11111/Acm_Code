#include <bits/stdc++.h>

using namespace std;
int a[200003];
int bits[30];
int main(){

    int t;
    cin >> t;
    while(t--)
    {
        memset(bits,0,sizeof bits);
        long long  n;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 30; j++)
            {
                if(a[i] & (1 << j))
                    bits[j]++;
            }
        }
        long long fmax =0;
        for (int i = 0; i < n; i++)
        {
            long long sum = 0;
            for (int j = 0; j< 30; j++)
            {
                long long ans = (1<< j);
                if(a[i] & ans)
                {
                    sum +=(n - bits[j]) * ans;
                }
                else
                {

                    sum += bits[j] * ans;
                }
            }
            fmax = max(fmax, sum);
        }

        cout <<fmax<<endl;
    }
    return 0;
}