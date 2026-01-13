#include <bits/stdc++.h>

using namespace std;
long long a[100003];
#define endl '\n'
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long > chafen;
        for(int i = 0;i < n;i++)
        {
            cin>>a[i];
        }
        for(int i = 1;i < n;i++)
        {
            chafen.push_back(abs(a[i]-a[i-1]));
        }
        vector<pair<int,int>> vt;
        vector<pair<int,int>> ct;
        for(int i = 1;i <= n-1;i++)
        {
            if(i == 1)
            {
                cout<<(n+1)*n/2-n<<' ';
                vt.push_back({0,chafen.size()-1});
            }
            else
            {
                long long ans = 0;
                for(auto it:vt)
                {

                    int l1 = it.first;
                    int r1 = it.second;
                    int nowl = -1;
                    int nowr = -1;
                    for(int j = l1;j <= r1;j++)
                    {
                        if(chafen[j] >= i)
                        {
                            if(nowl==-1)
                            {
                                nowl=nowr= j;
                            }
                            else
                                nowr = j;
                        }
                        else
                        {
                            if(nowl==-1)
                            {
                                continue;
                            }
                            long long x = nowr-nowl+1;
                            ans+=(x+1)*x/2;
                            ct.push_back({nowl,nowr});
                            nowl=nowr= -1;
                        }
                    }
                    if(nowl!=-1&&nowr!=-1)
                    {
                        long long x = nowr-nowl+1;
                        ans+=(x+1)*x/2;
                        ct.push_back({nowl,nowr});
                        nowl=nowr= -1;
                    }


                }
                cout<<ans<<' ';
                vt.clear();
                for(auto it:ct)
                {
                    vt.push_back(it);
                }
                ct.clear();
            }


        }
        cout<<endl;

    }

}