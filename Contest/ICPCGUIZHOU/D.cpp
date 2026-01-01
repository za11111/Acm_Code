#include <bits/stdc++.h>

using namespace std;
unordered_map
deque<int > dq;
int main ()
{
    int n;
    cin>>n;
    int index= 1 ;
    for(int i = 1;i <= n;i++)
    {
        char a,b;
        cin>>a>>b;
        if(a == 'A')
        {
            if(b=='S')
            {
                dq.push_front(index);
            }
            else
            {
                dq.push_back(index);
            }
            index++;
        }
        else
        {
            int c;
            cin>>c;
            {
                if(b =='S')
                {
                    for(int j = 0;j<c;j++)
                    {
                        dq.pop_front();
                    }
                }
                else
                {
                    for(int j = 0;j<c;j++)
                    {
                        dq.pop_back();
                    }
                }
            }
        }
    }
    while(!dq.empty())
    {
        cout<<dq.front()<<' ';
        dq.pop_front();
    }
}