#include <bits/stdc++.h>

using namespace std;
const int N = 2004;
int a[N];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int fmax = INT_MIN;
        int x, y;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            int tt = 0;
            for(int j = i; j < n; j++)
            {
                if(a[i] > a[j])
                {
                    tt++;
                }
                else if(a[i] < a[j])
                {
                    tt--;
                }
                if(tt > fmax)
                {
                    fmax = tt;
                    x = i + 1;
                    y = j + 1;
                }
            }
        }
        cout << x << ' ' << y << endl;
    }
}

