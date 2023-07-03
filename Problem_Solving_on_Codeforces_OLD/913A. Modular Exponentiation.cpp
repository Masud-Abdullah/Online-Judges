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
    ll n,m,i;
    cin>>n>>m;

    if(n>30)cout<<m<<nl;
    else
    {
        ll a[n+5];
        a[0]=1;
        for(i=1; i<=n; i++)
        {
            a[i]=a[i-1]*2;
        }
        cout<<m%a[n]<<nl;
    }

    return 0;
}


