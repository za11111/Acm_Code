#include<bits/stdc++.h>

using namespace std;
int a[100003];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i = 0;i < n;i++)
        {
            cin>>a[i];
        }
        int l = 0;
        int r = n - 1;
        int ans = 0;
        while(l <= r)
        {
            if(ans == 0)
            {
                ans = 1;
                if(a[l] > a[r])
                {
                    l++;
                    cout<<'L';
                }
                else
                {
                    r--;
                    cout<<'R';
                }
            }
            else if(ans == 1)
            {
                ans = 0;
                if(a[l] < a[r])
                {
                    l++;
                    cout<<'L';
                }
                else
                {
                    r--;
                    cout<<'R';
                }
            }

        }
        cout<<endl;
    }
}