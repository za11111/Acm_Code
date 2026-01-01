#include <bits/stdc++.h>

using namespace std;

const int n = 500;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long k;
        cin>>k;
        if(k==0)
        {
            cout<<"1\n";
            cout<<"1 1\n";
        }
        else
        {
            vector<long long> vt;
            long long ans = 0 ;
            long long sum = 0;
            while(k > 0)
            {
                for (long long i = 2; i < n; i++)
                {
                    ans = (i * i - i) / 2;
                    if (ans > k)
                    {
                        k = k-((i-1)*(i-1) - (i-1) )/ 2;
                        sum+=i-1;
                        vt.push_back(i - 1);
                        break;
                    }
                }
            }
            long long x = -1e9;
            long long y = -1e9;
            cout<<sum<<endl;
            for(int i =0 ; i < vt.size();i++)
            {
                for(int j = 0;j < vt[i];j++)
                {
                    x++;
                    cout<<x<<' '<<y<<endl;
                }
                x++;
                y++;
            }
        }

    }
}


