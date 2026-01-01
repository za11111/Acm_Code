#include <bits/stdc++.h>

using namespace  std;

int a[200003];
//bool check(int mid)
//{
//    for(int i = )
//}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i =0 ;i < n;i++)
        {
            cin>>a[i];
        }
        int index = a[0];
        int ans  =1;
        for(int i =0;i < n;i++)
        {
            if(index + 1 < a[i])
            {
                index = a[i];
                ans++;
            }
            else
            {

            }
        }
        cout<<ans<<endl;
    }
}