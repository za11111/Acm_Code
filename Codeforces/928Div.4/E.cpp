#include <bits/stdc++.h>

using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        long long nn = n;
        long long up = 0;
        int ans = 0;
        while(nn > 0)
        {
            ans++;
            if(k <= (nn+1)/ 2)
            {
                cout<< (k*2-1)*(long long)pow(2,ans-1)<<endl;
                break;
            }
            else
            {
                k = k-(nn+1)/2;
                up = (nn+1)/2;
                nn = nn - up;
            }
        }
    }
}
