#include <bits/stdc++.h>
using namespace std;
int main() {
    long long x;
    cin>>x;
    long long ans = 0;
    for(int i =1; i <=9;i++)
    {
        for(int j =1;j <= 9;j++)
        {
            if(i*j!=x)
                ans+=i*j;
        }
    }
    cout<<ans;
}
