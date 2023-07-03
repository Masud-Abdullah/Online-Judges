#include<bits/stdc++.h>
#define   nl         "\n"
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   fio        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fio;
    ll x,cnt=1;
    cin>>x;
    ll h,m;
    cin>>h>>m;

    if(h==07 || h==17 || m==07 || m==17 || m==27 || m==37 || m==47 || m==57)cout<<0<<nl;
    else
    {
        while(m>7+x)
        {
            m-=x;
            if(m==07 || m==17 || m==27 || m==37 || m==47 || m==57)
            {
                cout<<cnt<<nl;
                break;
            }
            else cnt++;
        }
    }

    return 0;
}



