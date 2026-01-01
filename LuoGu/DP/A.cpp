#include <bits/stdc++.h>
using namespace std;
int sg(int a,int b)
{
    int x,y;
    x = max(a,b);//30
    y = min(a,b);//1
    if(y ==0)
        return 0;
    else if(x==y)
        return 1;
    else if(y==1)
        return x;
    else
    {
        int t = x/y;
        if(t == 1)
        {
            int res = sg(x-y,y);
            if(res)
                return 0;
            else
                return 1;
        }
        else
            return 1;
    }
}
int main ()
{
    int a,b;
    while(1) {
        cin >> a >> b;
        if (a == 0 && b == 0)
            break;
        if (sg(a)^sg(b))
            cout << "win"<<"\n";
        else
            cout << "lose"<<"\n";
    }



}
