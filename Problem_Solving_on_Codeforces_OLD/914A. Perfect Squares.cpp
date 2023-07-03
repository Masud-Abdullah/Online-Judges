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

    ll n,i;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)cin>>a[i];

    ll max=-1e9;

    for(i=0;i<n;i++)
    {
        ll x=sqrt(a[i]);
        if(x*x!=a[i] && a[i]>max)max=a[i];
    }
    cout<<max<<nl;
    return 0;
}


