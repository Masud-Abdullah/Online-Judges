#include<bits/stdc++.h>
#define   nl         "\n"
#define   yy         "YES"
#define   nn         "NO"
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q,i;
        cin>>n>>q;
        ll a[n+5];
        a[0]=0;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            a[i]=a[i]+a[i-1];
        }


        for(i=1;i<=q;i++)
        {
            ll l,r,k;
            cin>>l>>r>>k;
            cout<<(((a[n]-a[r])+a[l-1]+k*(r-l+1))%2!=0?yy:nn)<<nl;
        }
    }

    return 0;
}



