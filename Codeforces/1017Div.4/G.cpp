#include <bits/stdc++.h>

using namespace std;
deque<long long > dq;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        dq.clear();
        int q;
        cin>>q;
        long long sum = 0;
        long long ans = 0;
        int index = 0;
        while(q--)
        {
            int s;
            cin>>s;

            if(s == 3)
            {
                long long k;
                cin>>k;
                if(index==0)
                {
                    dq.push_back(k);
                }
                else
                {
                    dq.push_front(k);
                }
                ans += dq.size()*k;
                sum+=k;
            }
            else if(s==2)
            {
                if(index==0)
                    index = 1;
                else
                    index=0;
                ans = sum*(dq.size()+1)-ans;
            }
            else
            { long long  l;
                if(index==1)
                {

                    l = dq.front();
                    dq.pop_front();
                    dq.push_back(l);
                }
                else
                {


                    l = dq.back();
                    dq.pop_back();
                    dq.push_front(l);
                }

                ans = ans+sum-1ll*dq.size()*l;

            }
            cout<<ans<<endl;
        }
    }

}
