#include <iostream>
#include <string>

using namespace std;
int a1,a2,a4,a5;
int f(int a3)
{
    int ans = 0;
    int fmax= 0 ;
    if(a1+a2 == a3)
        ans++;
    if(a2+a3 == a4)
        ans++;
    if(a3+a4 == a5)
        ans++;
    fmax =  max(ans,fmax);
    return fmax;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        cin>>a1>>a2>>a4>>a5;
        int ffmax = 0;
        ffmax = max(f(a1+a2),ffmax);
        ffmax = max(f(a4-a2),ffmax);
        ffmax = max(f(a5-a4),ffmax);
        cout<<ffmax<<endl;
    }
}
