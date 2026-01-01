#include <bits/stdc++.h>
using namespace std;
int a[1003];
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n ;
        cin>>n;
        for(int i =0 ;i <n ;i++)
        {
            cin>>a[i];
        }
        //(5+3) (3+1) (7+5
        //1 8 16 24 32
        //1 9 25 49 81
        long long ans=0;
        long long sum =1;
        long long all =0;
        int j = 3;
        for(int i =0;i < n;i++)
        {
            all+=a[i];
            if((int)sqrt(all) %2==0)
                continue;
            if((int)sqrt(all)*(int)sqrt(all)==all)
                ans++;
        }
        cout<<ans<<endl;
    }
}