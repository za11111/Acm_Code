#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans = 0;
        cout<<"? "<<1<<" "<<n;
        int who;
        cin>>who;
        if(who == 0)
        {
            cout<<"! IMPOSSIBLE\n";
            continue;
        }
        char ch[10003];
        for(int i = 1;i<=n;i++)
            ch[i] = '1';
        int shang = 0;
        for(int i = 1;i <= n;i++)
        {
            cout<<"? "<<i<<" "<<i+1;
            cin>>who;
            shang = who;
            if(who == 1)
            {
                ch[i] = '0';
                ch[i+1] = '1';
                cout<<"? "<<1<<" "<<i+1;
                cin>>who;
                for(int j=1;j<=who;j++)
                {
                    ch[i-j+1] = '1';
                }
                for(int j =i+2;j<=n;j++)
                {
                    cout<<"? "<<i<<" "<<j;
                    cin>>who;
                    if(who == shang)
                    {
                        ch[j] = '0';
                    }
                    else
                        ch[j] = '1';
                    shang = who;
                }
                cout<<"! ";
                for(int i =1;i<=n;i++)
                    cout<<ch[i];
                cout<<"\n";
                break;
            }
        }



    }
}
