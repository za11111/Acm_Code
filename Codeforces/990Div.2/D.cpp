#include <bits/stdc++.h>
using namespace  std;

queue<long long> qe;
map<long long,long long> mp;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        mp.clear();
        int n;
        cin>>n;
        long long fmin = LONG_LONG_MAX;
        long long fmax = LONG_LONG_MIN;
        for(int i =0;i < n;i++)
        {
            long long tt;
            cin>>tt;
            mp[tt]++;
            //st.insert(tt);
            fmin = min(tt,fmin);
            fmax= max(tt,fmax);
            qe.push(tt);
        }
        auto it = mp.begin();
        while(!qe.empty())
        {
            if(qe.front() > it->first)
            {
                int tt = qe.front();
                tt++;
                qe.pop();
                qe.push(tt);
            }
            else if(qe.front() == it->first)
            {
                cout<<qe.front()<<' ';
                fmin++;
                it->second--;
            }
            if(it->second ==0)
            {
                it++;
            }
            if(it==mp.end())
            {
                break;
            }
        }
        while(!qe.empty())
        {
            cout<<qe.front()<<' ';
            qe.pop();
        }
        cout<<endl;
    }
}










