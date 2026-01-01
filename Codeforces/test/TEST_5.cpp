#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k,m;
    cin>>k>>m;
    priority_queue<int,vector<int>,greater<int> > pq;
    pq.push(1);
    int i = 0;
    string s;
    while(i < k)
    {
        int t = pq.top();
        s+=to_string(t);
        pq.pop();
        pq.push(t*2+1);
        pq.push(4*t+5);
        i++;
    }
    cout<<s<<endl;
    while(m > 0)
    {
        for(i =0;i < s.size();i++)
        {
            if(s[i] < s[i+1])
            {
                m--;
                s.erase(i,1);
                break;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}