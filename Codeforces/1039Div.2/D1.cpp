#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
int a[300003];

int n,k,x,ans,s1,s2;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>n>>k;
        int fmax = 0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        if(n==1)
        {
            cout<<a[1];
            cout<<" 1 1\n";
            continue;
        }
        else if(n == 2)
        {
            cout<<max(a[2],a[1]);
            cout<<" 1 2\n";
            continue;
        }
        for(int i=1;i <=n-k+1;i++)
        {
            priority_queue<int> q2;  //相当于大顶堆
            priority_queue<int,vector<int>,greater<int>> q1;  //相当于小顶堆
            for(int j = i;j <= i+k-1;j++)
            {
                x = a[j];
                if(j==i) //第一个元素
                    q1.push(a[j]),s1++;
                else
                {
                    int k1=q1.top();  //每个数都判断加入哪个队列
                    if(x>=k1) q1.push(x),s1++;
                    else q2.push(x),s2++;
                }
                if(s1-s2==2)  //维护两个队列数量的平衡
                {
                    s1--; s2++;
                    int k1=q1.top();
                    q1.pop(); q2.push(k1);
                }
                if(s2-s1==2)
                {
                    s1++; s2--;
                    int k1=q2.top();
                    q2.pop(); q1.push(k1);
                }

            }
            if(s1>s2) ans=q1.top();    //哪个队数量多1，即说明中位数是那个队队首
            else if(s2>s1)
                ans = q2.top();
            else if(s1==s2)
                ans= max(q1.top(),q2.top());
            if(ans >= fmax)
            {
                fmax = ans;
                l = i;
                r = i+k-1;
            }
            s1=s2=0;
        }
        if(k ==n)
            cout<<fmax<<' '<<l<<' '<<r<<endl;
        else
        {
            k++;
            for(int i=1;i <=n-k+1;i++)
            {
                priority_queue<int> q2;  //相当于大顶堆
                priority_queue<int,vector<int>,greater<int>> q1;  //相当于小顶堆
                for(int j = i;j <= i+k-1;j++)
                {
                    x = a[j];
                    if(j==i) //第一个元素
                        q1.push(a[j]),s1++;
                    else
                    {
                        int k1=q1.top();  //每个数都判断加入哪个队列
                        if(x>=k1) q1.push(x),s1++;
                        else q2.push(x),s2++;
                    }
                    if(s1-s2==2)  //维护两个队列数量的平衡
                    {
                        s1--; s2++;
                        int k1=q1.top();
                        q1.pop(); q2.push(k1);
                    }
                    if(s2-s1==2)
                    {
                        s1++; s2--;
                        int k1=q2.top();
                        q2.pop(); q1.push(k1);
                    }

                }
                if(s1>s2) ans=q1.top();    //哪个队数量多1，即说明中位数是那个队队首
                else if(s2>s1)
                    ans = q2.top();
                else if(s1==s2)
                    ans= max(q1.top(),q2.top());
                if(ans >= fmax)
                {
                    fmax = ans;
                    l = i;
                    r = i+k-1;
                }
                s1=s2=0;
            }
            //cout<<fmax<<' '<<l<<' '<<r<<endl;
            if(k ==n)
                cout<<fmax<<' '<<l<<' '<<r<<endl;
            else
            {
                k++;
                for(int i=1;i <=n-k+1;i++)
                {
                    priority_queue<int> q2;  //相当于大顶堆
                    priority_queue<int,vector<int>,greater<int>> q1;  //相当于小顶堆
                    for(int j = i;j <= i+k-1;j++)
                    {
                        x = a[j];
                        if(j==i) //第一个元素
                            q1.push(a[j]),s1++;
                        else
                        {
                            int k1=q1.top();  //每个数都判断加入哪个队列
                            if(x>=k1) q1.push(x),s1++;
                            else q2.push(x),s2++;
                        }
                        if(s1-s2==2)  //维护两个队列数量的平衡
                        {
                            s1--; s2++;
                            int k1=q1.top();
                            q1.pop(); q2.push(k1);
                        }
                        if(s2-s1==2)
                        {
                            s1++; s2--;
                            int k1=q2.top();
                            q2.pop(); q1.push(k1);
                        }

                    }
                    if(s1>s2) ans=q1.top();    //哪个队数量多1，即说明中位数是那个队队首
                    else if(s2>s1)
                        ans = q2.top();
                    else if(s1==s2)
                        ans= max(q1.top(),q2.top());
                    if(ans >= fmax)
                    {
                        fmax = ans;
                        l = i;
                        r = i+k-1;
                    }
                    s1=s2=0;
                }
                //cout<<fmax<<' '<<l<<' '<<r<<endl;
                if(k ==n)
                        cout<<fmax<<' '<<l<<' '<<r<<endl;
                    else
                    {
                        k++;
                        for(int i=1;i <=n-k+1;i++)
                        {
                            priority_queue<int> q2;  //相当于大顶堆
                            priority_queue<int,vector<int>,greater<int>> q1;  //相当于小顶堆
                            for(int j = i;j <= i+k-1;j++)
                            {
                                x = a[j];
                                if(j==i) //第一个元素
                                    q1.push(a[j]),s1++;
                                else
                                {
                                    int k1=q1.top();  //每个数都判断加入哪个队列
                                    if(x>=k1) q1.push(x),s1++;
                                    else q2.push(x),s2++;
                                }
                                if(s1-s2==2)  //维护两个队列数量的平衡
                                {
                                    s1--; s2++;
                                    int k1=q1.top();
                                    q1.pop(); q2.push(k1);
                                }
                                if(s2-s1==2)
                                {
                                    s1++; s2--;
                                    int k1=q2.top();
                                    q2.pop(); q1.push(k1);
                                }

                            }
                            if(s1>s2) ans=q1.top();    //哪个队数量多1，即说明中位数是那个队队首
                            else if(s2>s1)
                                ans = q2.top();
                            else if(s1==s2)
                                ans= max(q1.top(),q2.top());
                            if(ans >= fmax)
                            {
                                fmax = ans;
                                l = i;
                                r = i+k-1;
                            }
                            s1=s2=0;
                        }
                        cout<<fmax<<' '<<l<<' '<<r<<endl;
                    }
            }
        }
    }
    return 0;
}
