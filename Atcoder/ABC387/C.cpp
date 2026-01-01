#include <bits/stdc++.h>
using namespace std;
long long a[19];

void Init()
{
    long long p =1 ;
    a[0] = 1;
    for(int i =1;i <= 18;i++)
    {
        a[i]+=a[i-1];
        for(int j=1;j<=9;j++)
        {
            a[i]+=pow(j,i-1);
        }
        //cout<<a[i] <<' ';
    }
}
long long f(long long ans)
{

    return sum+a[weishu-1];
}
int main() {
    Init();
    long long l,r;
    cin>>l;
    cout<<f(l)<<endl;
//    cin>>l>>r;
//    cout<<f(r)-f(l-1)<<endl;
}
