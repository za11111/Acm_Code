#include <bits/stdc++.h>

using namespace std;
long long  a[200003];
long long  N = 200005;
long long   b[200003];
bool    mp[500005];
bool visA[500005];
bool visB[500005];
int main ()
{
    int t;
    t= 1;
    while(t--)
    {
        int n,m,q;
        scanf("%d%d%d",&n,&m,&q);
        long long  suma =0,sumb = 0;
        for(int i =0; i < n;i++)
        {
            scanf("%lld",&a[i]);
            suma+=a[i];
        }
        for(int i =0;i < m;i++)
        {
            scanf("%lld",&b[i]);
            sumb+=b[i];
        }
        for(int i =0; i < n;i++)
        {
            long long d = suma - a[i];
            if(abs(d)<N)
                visA[d+N]=1;
        }
        for(int i =0; i < m;i++)
        {
            long long d = sumb - b[i];
            if(abs(d)<N)
                visB[d+N]=1;
        }
        for (int i = 1; i < N; i++)
        {
            for (int j = 1; j * i < N; j++)
            {
                mp[N + i * j] |= visA[N + i] && visB[N + j];
                mp[N + i * j] |= visA[N - i] && visB[N - j];
                mp[N - i * j] |= visA[N + i] && visB[N - j];
                mp[N - i * j] |= visA[N - i] && visB[N + j];
            }
        }
        while(q--) {
            int who = 0;

            scanf("%d", &who);
                if (mp[who+N])
                    printf("YES\n");
                else
                    printf("NO\n");
        }

    }
}
