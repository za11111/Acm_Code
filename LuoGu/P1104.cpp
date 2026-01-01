
#include <bits/stdc++.h>
using namespace std;
struct cj
{
    string name;
    int  year;
    int  month;
    int  day;
    int index;
}a[103];
int cmp(cj a,cj b)
{
    if(a.year == b.year)
    {
        if(a.month == b.month)
        {
            if(a.day == b.day)
            {
                return a.index > b.index;
            }
            else
                return a.day < b.day;
        }
        else
            return a.month < b.month;
    }
    return a.year < b.year;

}
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    int i = 0;
    cin>>t;
    for(i = 0;i  < t;i++)
    {
        cin>>a[i].name>>a[i].year>>a[i].month>>a[i].day;
        a[i].index = i;
    }
    sort(a,a+t,cmp);
    for(i = 0;i <t;i++)
    {
        cout<<a[i].name<<"\n";
    }
}