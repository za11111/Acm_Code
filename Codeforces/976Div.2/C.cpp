#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        long long b,c,d;
        cin>>b>>c>>d;
        long long weishu = 1;
        int i;
        int ans  =0;
        long long a = 0;
        int bns,cns,dns;
        for(i = 0;i < 62;i++)
        {
            if(b&weishu) bns = 1;
            else bns = 0;
            if(c&weishu) cns = 1;
            else cns = 0;
            if(d&weishu) dns = 1;
            else dns = 0;

            if(bns && (!cns) && (!dns) || (!bns) && cns && dns)
            {
                ans = 1;
                break;
            }
            if(bns&&cns)
            {
                a += (1ll-dns)*weishu;
            }
            else
            {
                a+=dns*weishu;
            }
            weishu<<=1;
        }
        if(ans == 1)
        {
            cout<<-1<<"\n";
            continue;
        }
        else
            cout<<a<<"\n";
    }

    return 0;
}