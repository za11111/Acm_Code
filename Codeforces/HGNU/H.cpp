#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<0;
        }
        else if(a < b)
        {
            int tt =b -a;
            if(tt %2==0)
            {
                if(tt /2%2 == 1)
                {
                    cout<<2;
                }
                else
                    cout<<3;
            }
            else
            {
                cout<<1;
            }
        }
        else
        {
            int tt = a - b;
            if(tt %2==0)
            {
                cout<<1;
            }
            else
            {
                //9 4 2
                //-6 +1
                //9 6
                //-4 + 1
                //9 2
                //-8
                cout<<2;
            }
        }
        cout<<endl;
    }
}
//3 7
//3 6 9 -2
//3 5
//3 +3 +3