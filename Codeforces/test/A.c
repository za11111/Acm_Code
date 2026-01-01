#include<stdio.h>
int main()
{
    int t1,t,T;
    scanf("%d%d",t1,t);
    T=t1/100*60+t1%100+t;
    printf("%d",T/60*100+T%60);
    return 0;
}