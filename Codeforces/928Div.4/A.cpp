#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    int i;
    cin >> n;
    for(i = 0;i < n;i++)
    {
        string a;
        cin>>a;
        int ca,cb;
        ca = cb = 0;
        for(int j = 0;j < a.size();j++)
        {
            if(a[j] == 'A')
                ca++;
            else
                cb++;
        }
        if(ca > cb)
            cout<<"A"<<endl;
        else
            cout <<"B"<<endl;
    }
    return 0;

}
