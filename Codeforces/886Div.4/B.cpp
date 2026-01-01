#include <bits/stdc++.h>
using namespace std;
struct cj
{
    int a;
    int b;
}w[52];
bool cmp(cj x, cj y)
{
    return x.b>y.b;
}
int main ()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin >> n;
        int j = 0;
        for (int i = 0; i < n; i++) {
            int aa, bb;
            cin >> aa >> bb;
            if (aa <= 10) {
                w[j].a = i;
                w[j].b = bb;
                j++;
            }
        }

        sort(w,w+j,cmp);
        cout<<w[0].a+1<<endl;
    }
}
