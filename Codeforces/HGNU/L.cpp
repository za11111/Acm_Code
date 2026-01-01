#include <bits/stdc++.h>
using namespace std;
int a[1000003][33];
int yu[1000003];
int huo[1000003];
int ans[1000003];
int main ()
{
    int n;
    cin>>n;
    memset(yu,true, sizeof(yu));
    for(int i=0;i < n;i++)
    {
        for(int j = 0;j <32;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            {
                ans[j]++;
                huo[j] = 1;
            }
            else
            {
                yu[j] = 0;
            }
        }
    }
    for(int i = 0;i < 32;i++)
    {
        printf("%d ",yu[i]);
    }
    printf("\n");
    for(int i = 0;i <32;i++)
    {
        printf("%d ",huo[i]);
    }
    printf("\n");
    for(int i = 0;i < 32;i++)
    {
        if(ans[i]%2==1)
            printf("1 ");
        else
            printf("0 ");
    }

}
