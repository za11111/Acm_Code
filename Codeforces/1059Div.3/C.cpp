
#include <bits/stdc++.h>

using namespace  std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        int h1= b;
        int h2=a;
        int ans1 = 0;
        int ans2 = 0;
        vector<int> a1;
        vector<int> a2;
        while(h1>0)
        {
            a1.push_back(h1%2);
            h1 = h1/2;
            ans1++;
        }
        while(h2>0)
        {
            a2.push_back(h2%2);
            h2 = h2/2;
            ans2++;
        }
        if(b==a)
        {
            cout<<0<<endl;
            continue;
        }
        if(b > a)
        {
            if(ans1 == ans2)
            {
                long long p = 1;
                vector<int> a;
                for(int i = 0;i< a1.size();i++)
                {
                    if(a1[i] != a2[i])
                    {
                        a.push_back(p);
                    }
                    p=p*2;
                }
                cout<<a.size()<<endl;
                for(int i =0;i<a.size();i++)
                {
                    if(i+1 == a.size())
                        cout<<a[i]<<endl;
                    else
                        cout<<a[i]<<' ';
                }

            }
            else
                cout<<-1<<endl;
        }
        else
        {
            long long p = 1;
            vector<int> a;
            int x = a2.size()-a1.size();
            for(int i = 0; i< x;i++)
            {
                a1.push_back(0);
            }
            for(int i = 0;i< a1.size();i++)
            {
                if(a1[i] != a2[i])
                {
                    a.push_back(p);
                }
                p=p*2;
            }
            cout<<a.size()<<endl;
            for(int i =0;i<a.size();i++)
            {
                if(i+1 == a.size())
                    cout<<a[i]<<endl;
                else
                    cout<<a[i]<<' ';
            }
        }

    }
}