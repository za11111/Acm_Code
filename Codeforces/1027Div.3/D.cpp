#include <bits/stdc++.h>

using namespace  std;

struct point
{
    long long x,y;
}a[200003];
int cmp1(point h1,point h2)
{
    if(h1.x == h2.x)
        return h1.x < h2.y;
    return h1.x < h2.x;
}
int n;
long long shanchu(int index)
{
    long long xmax,xmin,ymax,ymin;
    ymax= xmax=-1e18;
    ymin = xmin = 1e18;
    for(int i = 0;i < n;i++)
    {
        if(i == index)
            continue;
        xmax = max(a[i].x,xmax);
        xmin = min(a[i].x,xmin);
        ymax = max(a[i].y,ymax);
        ymin = min(a[i].y,ymin);
    }
    long long h = (abs(xmin-xmax)+1)*(abs(ymin-ymax)+1);
    if(n <= h)
        return h;
    else
        return h+min((abs(xmin-xmax)+1),(abs(ymin-ymax)+1));
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        cin>>n;

        long long fmax_x,fmax_y,fmin_x,fmin_y;
        int fmax_x_maxy = 0,fmax_x_miny = 0;
        int fmax_y_maxx = 0,fmax_y_minx = 0;
        int fmin_x_maxy = 0,fmin_x_miny = 0;
        int fmin_y_maxx = 0,fmin_y_minx = 0;
        fmax_x = fmax_y = -1e18;
        fmin_x = fmin_y = 1e18;
        for(int i =0;i < n;i++)
        {
            cin>>a[i].x>>a[i].y;
            if(a[i].x > fmax_x)
            {
                fmax_x = a[i].x;
                fmax_x_maxy = fmax_x_miny = i;
            }
            else if(a[i].x == fmax_x)
            {
                if(a[i].y > a[fmax_x_maxy].y)
                {
                    fmax_x_maxy = i;
                }
                if(a[i].y < a[fmax_x_miny].y)
                {
                    fmax_x_miny = i;
                }
            }

            if(a[i].x < fmin_x)
            {
                fmin_x = a[i].x;
                fmin_x_maxy = fmin_x_miny = i;
            }
            else if(a[i].x == fmin_x)
            {
                if(a[i].y > a[fmin_x_maxy].y)
                {
                    fmin_x_maxy = i;
                }
                if(a[i].y < a[fmin_x_miny].y)
                {
                    fmin_x_miny = i;
                }
            }

            if(a[i].y > fmax_y)
            {
                fmax_y = a[i].y;
                fmax_y_maxx = fmax_y_minx = i;
            }
            else if(a[i].y == fmax_y)
            {
                if(a[i].x > a[fmax_y_maxx].x)
                {
                    fmax_y_maxx = i;
                }
                if(a[i].x < a[fmax_y_minx].x)
                {
                    fmax_y_minx = i;
                }
            }

            if(a[i].y < fmin_y)
            {
                fmin_y = a[i].y;
                fmin_y_maxx = fmin_y_minx = i;
            }
            else if(a[i].y == fmin_y)
            {
                if(a[i].x > a[fmin_y_maxx].x)
                {
                    fmin_y_maxx = i;
                }
                if(a[i].x < a[fmin_y_minx].x)
                {
                    fmin_y_minx = i;
                }
            }
        }
        long long haha = 1e18;
        if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
            haha = min(haha,shanchu(fmax_x_maxy));
            haha = min(haha,shanchu(fmax_x_miny));

        haha = min(haha,shanchu(fmax_y_maxx));
        haha = min(haha,shanchu(fmax_y_minx));

        haha = min(haha,shanchu(fmin_x_maxy));
        haha = min(haha,shanchu(fmin_x_miny));

        haha = min(haha,shanchu(fmin_y_maxx));
        haha = min(haha,shanchu(fmin_y_minx));
        cout<<haha<<endl;
    }
}