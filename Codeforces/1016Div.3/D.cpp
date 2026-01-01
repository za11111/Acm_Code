#include <bits/stdc++.h>

using namespace std;

long long who(int n,long long l,long long r)
{
    if(n==1)
    {
        if(l==1&&r ==1)
            return 1;
        if(l==2&&r==2)
            return 2;
        if(l==2&&r==1)
            return 3;
        if(l==1&&r==2)
            return 4;
    }
    long long a = 1<<(n-1);
    long long b = a*a;
    if(l <= a&& r <= a)
        return who(n-1,l,r);
    if(l > a&& r > a)
        return b+who(n-1,l-a,r-a);
    if(l > a&& r <= a)
        return 2*b+who(n-1,l-a,r);
    return 3*b+who(n-1,l,r-a);
}
pair<long long,long long> where(int n,long long l)
{
    if(n==1){
        if(l == 1)
            return {1,1};
        if(l == 2)
            return {2,2};
        if(l == 3)
            return {2,1};
        return {1,2};
    }
    long long a = 1<<(n-1);
    long long b = a*a;
    if(l <= b) {
        auto p = where(n-1, l);
        return {p.first, p.second};
    }
    if(l <= 2*b) {
        auto p = where(n-1, l - b);
        return {p.first + a, p.second + a};
    }
    if(l <= 3*b) {
        auto p = where(n-1, l - 2*b);
        return {p.first + a, p.second};
    }
    auto p = where(n-1, l - 3*b);
    return {p.first, p.second + a};
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {tuple<int,int,int> tp;
        tp={3,2,1};
        int n;
        cin>>n;
        int q;
        cin>>q;
        while(q--)
        {
            string s;
            cin>>s;
            if(s=="<-")
            {
                long long l;
                cin>>l;
                auto pr = where(n,l);
                cout<<pr.first<<' '<<pr.second<<endl;
            }
            else
            {
                long long l,r;
                cin>>l>>r;
                cout<<who(n,l,r)<<endl;
            }
        }
    }

}
