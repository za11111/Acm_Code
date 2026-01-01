#include <bits/stdc++.h>

using namespace std;

long long a[200003];
long long pre[200003];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        for(int i = 1;i <= n; i++)
        {
            cin >> a[i];
        }
        if(n == 1)
        {
            cout<<0<<endl;
            continue;
        }
        sort(a+1,a +1+ n);
        for(int i = 1;i <= n;i++)
        {
            pre[i]=pre[i-1]+a[i];
        }
        vector<long long> vt;
        int l,r;
        l = 1;
        r = n;
        for(int i =n;i >=3;i--)
        {
            if(pre[r]-pre[l-1] -a[r] > a[r])
            {
                vt.push_back(pre[r]-pre[l-1]);
                l++;
            }
            else
            {
                while(1)
                {
                    l--;
                    r--;
                    if(l == 0)
                    {
                        vt.push_back(0);
                        l = 1;
                        break;
                    }
                    else if(pre[r]-pre[l-1]-a[r] > a[r])
                    {

                        vt.push_back(pre[r]-pre[l-1]);
                        l++;
                        break;
                    }
                }
            }
        }
        cout << 0 << " "<< 0;
        for(auto i = vt.rbegin();i!=vt.rend();i++)
        {
            cout<<' '<<*i;
        }
        cout<<endl;
    }
}