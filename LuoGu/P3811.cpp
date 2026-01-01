#include <iostream>

using namespace std;
long long inv[1000003];
void inverse(long long n,long long p)
{
    inv[1] =  1;
    for(int i = 2;i <= n;i++)
    {
        inv[i] = (p - p / i) * inv[p % i] % p;
    }
}
int main ()
{
    long long n, p;
    cin>>n>>p;
    inverse(n,p);
    for(int i = 1;i <= n;i++)
    {
        cout<<inv[i]<<endl;
    }

    return 0;
}