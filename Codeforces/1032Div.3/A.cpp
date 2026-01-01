    #include <bits/stdc++.h>

    using namespace std;
    long long a[13];
    int main ()
    {
        int t;
        cin>>t;
        while(t--)
        {
            long long n,s;
            cin>>n>>s;
            long long fmax,fmin;
            fmax = 0;
            fmin = 1e9;
            for(int i =0 ;i < n;i++)
            {
                cin>>a[i];
                fmax = max(fmax,a[i]);
                fmin = min(fmin,a[i]);
            }
            cout<<fmax-fmin+min(abs(s-fmax),abs(s-fmin))<<endl;

        }
    }