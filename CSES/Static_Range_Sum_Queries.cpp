#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,q;cin>>n>>q;
    ll a[n+1];
    a[0]=0;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)a[i]+=a[i-1];
    while(q--)
    {
        ll x,y;cin>>x>>y;
        cout<<a[y]-a[x-1]<<'\n';
    }
    return 0;
}