#include <bits/stdc++.h>

using namespace std;
int a[200003];
int b[200003];
int aa[200003];
int bb[200003];
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(aa,0,sizeof 0);
        memset(bb,0,sizeof 0);
        memset(a,0,sizeof 0);
        memset(b,0,sizeof 0);
        string s1,s2;
        cin>>s1>>s2;
        int l,r;
        l = r =0;
        int ans = 0;
        int bns = 0;
        string ss1,ss2;

        for(int i =0;i<s1.size();i++)
        {
            if(s1[i]=='L')
            {
                if(bns>0) {
                    ss1+='R';
                    b[r] = bns;
                    r++;
                    bns = 0;
                }
                ans++;
            }
            else
            {
                if(ans > 0)
                {ss1+='L';
                a[l] = ans;
                l++;
                ans =0;
                }
                bns++;
            }
        }
        if(ans > 0)
        {ss1+='L';
            a[l] = ans;
            l++;
            ans =0;
        }
        if(bns>0) {ss1+='R';
            b[r] = bns;
            r++;
            bns = 0;
        }
        int ll,rr,aans,bbns;
        ll=rr=0;
        aans=bbns=0;
        for(int i =0;i<s2.size();i++)
        {
            if(s2[i]=='L')
            {
                if(bbns>0) {ss2+='R';
                    bb[rr] = bbns;
                    rr++;
                    bbns = 0;
                }
                aans++;
            }
            else
            {
                if(aans > 0)
                {ss2+='L';
                    aa[ll] = aans;
                    ll++;
                    aans =0;
                }
                bbns++;
            }
        }
        if(aans > 0)
        {ss2+='L';
            aa[ll] = aans;
            ll++;
            aans = 0;
        }
        if(bbns>0) {ss2+='R';
            bb[rr] = bbns;
            rr++;
            bbns = 0;
        }
        if(ss1.size()!=ss2.size())
        {
            cout<<"NO\n";
            continue;
        }
        int os=0;
        int l1,r1;
        l1=r1=0;
        for(int i=0;i<ss1.size();i++)
        {
            if(ss1[i]==ss2[i])
            {
                if(ss1[i]=='L')
                {
                    if(aa[l1]>=a[l1]&&aa[l1]<=a[l1]*2)
                    {
                        l1++;
                    }
                    else
                    {
                        os=1;
                        break;
                    }
                }
                else
                {
                    if(bb[r1]>=b[r1]&&bb[r1]<=b[r1]*2)
                    {
                        r1++;
                    }
                    else
                    {
                        os=1;
                        break;
                    }
                }
            }
            else
            {
                os=1;
                break;
            }
        }
        if(os==1)
        {
            cout<<"NO\n";
            continue;
        }
        else
        {
            cout<<"YES\n";
            continue;
        }
//        cout<<l<<' '<<r<<endl;
//        for(int i =0;i<l;i++)
//        {
//            cout<<a[i]<<" ";
//        }
//        cout<<endl;
//        for(int i =0;i<r;i++)
//        {
//            cout<<b[i]<<' ';
//        }
//        cout<<endl;
//        cout<<ll<<' '<<rr<<endl;
//        for(int i =0;i<ll;i++)
//        {
//            cout<<aa[i]<<" ";
//        }
//        cout<<endl;
//        for(int i =0;i<rr;i++)
//        {
//            cout<<bb[i]<<' ';
//        }
    }

}