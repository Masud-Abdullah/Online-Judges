#include<bits/stdc++.h>
using namespace std;
#define ll long long int

const ll N = 2*(1e5+5);
ll n,m;
ll a[N];


bool check(ll mid)
{
    ll total=0;
    for(int i=0;i<n;i++)
    {
        total+=(mid/a[i]);
        if(total>m)return true;
    }
    return total>=m;
}
int main()
{
    cin>>n>>m;

    for(int i=0;i<n;i++)cin>>a[i];

    ll lo=0,hi=1e18,ans=0;
    while(lo<=hi)
    {
        ll mid=(lo+hi)/2;
        if(check(mid))
        {
            hi=mid-1;
            ans=mid;
        }
        else
        {
            lo=mid+1;
        }
    }
    cout<<ans<<'\n';
    return 0;
}