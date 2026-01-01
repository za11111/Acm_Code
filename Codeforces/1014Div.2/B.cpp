#include <bits/stdc++.h>

using namespace std;
long long a[103];

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s1;
        string s2;
        cin>>s1>>s2;
        long long sum1,sum2;
        sum1 = sum2 = 0;
        long long ans,bns;
        ans = bns = 0;
        for(int i =0; i <s1.size();i++)
        {
            if(i%2==0)
            {
                ans++;
                if(s1[i]=='0')
                    sum1++;
            }
            else
            {
                bns++;
                if(s1[i]=='0')
                    sum2++;
            }
        }
        for(int i =0; i <s2.size();i++)
        {
            if(i%2==0)
            {
                bns++;
                if(s2[i]=='0')
                    sum2++;
            }
            else
            {
                ans++;
                if(s2[i]=='0')
                    sum1++;
            }
        }
        if(sum1 >= ((ans+1)/2)&& sum2 >= (bns/2))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}