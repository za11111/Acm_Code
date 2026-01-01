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
        int sb = 0;
        int mustone = 0;
        int mustzero  =0;
        int bns = 0;
        long long ans = 0;
        for(int i = 0;i < n;i++)
        {
            cin>>l[i]>>r[i];
        }

        int index = n-1;
        for(int i=n-1;i >= 0;i--)
        {
            int now = 0;
            if(now>r[i])
            {
                bns = 1;
                break;
            }
            else if(now < l[i])
            {
                for(int j =i;j>=0;j--)
                {
                    if(a[j] == 1)
                    {
                        now++;
                    }
                    else if(a[j] ==-1)
                    {
                        a[j] = 1;
                        now++;
                    }
                    if(now >=l[i])
                    {
                        index = j-1;
                        break;
                    }
                }
                if(now >=l[i])
                {}
                else
                {
                    bns=  1;
                    break;
                }
            }
            else
            {

            }
        }
        if(bns == 1)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(int i =0; i <n ;i++)
            {
                if(a[i]==-1)
                    cout<<0<<' ';
                else
                    cout<<a[i]<<' ';
            }
            cout<<'\n';
        }
    }
    return 0;
}