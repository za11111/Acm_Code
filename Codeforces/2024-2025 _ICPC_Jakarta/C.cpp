#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int t;
    //cin>>t;
    t = 1;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        string all;
        int l,r;
        l = r = 0;
        int fmin = INT_MAX;
        char cc;
        int ans =0;
        reverse(b.begin(),b.end());
        for(int i = 1;i <= 26;i++ )
        {
            char c = 'a'+i-1;
            int f1,f2;

            f1= a.find(c);
            if(f1 == 0)
                f1 = a.find(c,1);
            f2= b.find(c);
            if(f2 == 0)
                f2 = b.find(c,1);
            if(f1==string::npos||f2==string::npos)
                continue;
            else
            {
                ans = 1;
                if(f1+f2 < fmin)
                {
                    cc = c;
                    fmin = f1+f2;
                    l = f1;
                    r =f2;
                }
            }
        }
        if(ans ==0){
            cout<<-1<<endl;
            continue;
        }
        string s;
        for(int i = 0;i <=l-1;i++)
        {
            s+=a[i];
        }
        //s=cc;
        for(int i =r;i >=0;i--)
        {
            s+=b[i];
        }
        cout<<s<<endl;
    }
}
