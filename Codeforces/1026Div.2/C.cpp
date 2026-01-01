#include <bits/stdc++.h>


using namespace std;
long long  a[200003];
long long  l[200003];
long long  r[200003];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        memset(a,0,sizeof a);
        memset(l,0,sizeof l);
        memset(r,0,sizeof r);
        int n;
        cin>>n;
        for(int i =0;i < n;i++)
        {
            cin>>a[i];
        }
        int left = 0;
        int ans = 0;
        for(int i = 0;i < n;i++)
        {
            cin>>l[i]>>r[i];
        }
        vector<int> last;
        for(int i =0; i < n;i++)
        {
            if(a[i] == -1)
            {
                last.push_back(i);
            }
            else
            {
                left += a[i];
            }
            while(left < l[i])
            {
                if(last.empty())
                {
                    ans = 1;
                    break;
                }
                a[last.back()] = 1;
                left++;
                last.pop_back();
            }
            if(ans == 1)
                break;
            while(left+last.size() > r[i])
            {
                if(last.empty())
                {
                    ans = 1;
                    break;
                }
                a[last.back()] = 0;
                last.pop_back();
            }
            if(ans == 1)
                break;
        }
        if(ans)
            cout<<-1<<endl;
        else
        {
            for(int i =0;i < n;i++)
            {
                cout<<max(0ll,a[i])<<' ';
            }
            cout<<endl;
        }
    }
    return 0;
}