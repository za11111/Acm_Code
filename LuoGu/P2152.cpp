#include <iostream>

using namespace std;
int gcd(int a,int b)
{
    return b ? gcd(b,a%b):a;
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        long long dir = gcd(a*d+b*c,b*d);
        cout<<(a*d+b*c)/dir<<" ";
        cout<<b*d/dir<<endl;
    }
    return 0;
}