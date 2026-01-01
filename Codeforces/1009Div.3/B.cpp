#include <bits/stdc++.h>

using namespace std;
priority_queue<long long> qe;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i < n;i++)
        {
            long long tt;
            cin>>tt;
            qe.push(tt);
        }
        while(qe.size() > 2)
        {
            long long a,b;
            a = qe.top();
            qe.pop();
            b = qe.top();
            qe.pop();
            qe.push(a+b-1);
        }
        cout<<qe.top();
        
    }
}