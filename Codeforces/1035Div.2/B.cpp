
#include<bits/stdc++.h>

using namespace std;
double  a[1003];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        double all = 0;
        double  px,py,qx,qy;
        cin>>px>>py>>qx>>qy;
        double fmax =0 ;
        double db= sqrt((px-qx)*(px-qx)+(qy-py)*(qy-py));
        for(int i = 0;i < n;i++)
        {
            cin>>a[i];
            all+=a[i];
            fmax = max(fmax,a[i]);
        }
        if(db > all)
        {
            cout<<"No\n";
            continue;
        }
        else if(n == 1)
        {
            if(db == all)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
        else
        {
            if(all - fmax + db>= fmax)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
    }
    return 0;
}
