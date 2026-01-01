#include <iostream>
using namespace std;
int a[100003];
long long gcd(int a,int b)
{
    return b ? gcd(b,a%b):a;
}
int main ()
{
    int n;
    int i;
    cin>>n;
    for(i = 0;i < n;i++)
    {
        cin>>a[i];
    }
    long long sum = 0;
    sum = gcd(abs(a[0]),abs(a[1]));
    for(i = 1;i < n/2;i = i+2)
    {
        sum = gcd(abs(a[i]),sum);
    }
    cout<<sum;
}