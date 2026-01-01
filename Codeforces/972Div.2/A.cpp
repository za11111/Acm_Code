#include <bits/stdc++.h>
using namespace std;

const string a = "aeiou";

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t; cin >> t; // test cases

    while (t--) {
        int n;
        cin>>n;
        int ans = n / 5;
        int yu = n % 5;
        int i;
        for(i =0;i < 5;i++)
        {
            int ttt;
            if(i <yu)
            {
                ttt = 1;
            }
            else
            {
                ttt =0 ;
            }
            for(int j = 0;j < ans+ttt;j++)
            {
                cout<<a[i];
            }
        }
        cout<<endl;
    }
}