#include <bits/stdc++.h>

using namespace std;

int t;
int n;

int main()
{
    cin >> t;
    while(t--)
    {
        deque <int> dq1;
        deque <int> dq2;
        cin>>n;
        for(int i = 1;i <= n;i++)
        {
            if(i%2==1)
                dq1.push_back(i);
            else
                dq2.push_front(i);
        }
        while(!dq1.empty())
        {
            cout<<dq1.front()<<' ';
            dq1.pop_front();
        }
        while(!dq2.empty())
        {
            cout<<dq2.front()<<' ';
            dq2.pop_front();
        }
        cout<<endl;
    }
}