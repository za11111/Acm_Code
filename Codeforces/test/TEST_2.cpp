#include <bits/stdc++.h>

using namespace std;
int main()
{
    for(int c= 93;c <= 93;c++)
    {
        int  n;
        n=c;
        stack<int> st;
        int p = 5;
        int mo = n;
        if(n <=3)
        {
            cout<<n<<endl;
            for(int i =1;i<=n;i++)
            {
                cout<<i<<' ';
            }
            cout<<endl;
            continue;
        }
        while(n >3)
        {
            if(n==4)
            {
                break;
            }
            int h = n%5;
            if(h !=4)
            {
                for(int i =0;i <h;i++)
                {
                    st.push(mo-i*(p/5));
                }
            }

            mo = mo-h*(p/5);
            n = n/5;
            if(n == 4)
            {
                break;
            }
            p=p*5;
            if(n <= 3)
            {
                for(int i =0;i < n;i++)
                {
                    st.push(mo-i*(p/5));
                }
            }
        }

        while(st.size() > 3)
        {
            stack<int> st2;
            int g = st.size();
            int yushu = g%5;
            if(yushu <=3&&yushu>=1)
            {
                for(int i =1;i <= g;i++)
                {
                    if(g-i+1<=yushu)
                    {
                        st2.push(st.top());
                    }
                    else if(i%5==0)
                    {
                        st2.push(st.top());
                    }
                    st.pop();
                }
            }
            else
            {
                for(int i =1;i <= g;i++)
                {
                    if(i%5==0)
                    {
                        st2.push(st.top());
                    }
                    st.pop();
                }
            }
            while(!st2.empty())
            {
                st.push(st2.top());
                st2.pop();
            }
        }
        cout<<st.size()<<endl;
        while(!st.empty())
        {
            cout<<st.top()<<' ';
            st.pop();
        }
        cout<<endl;
    }





}