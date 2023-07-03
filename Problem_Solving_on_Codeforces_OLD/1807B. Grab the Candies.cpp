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
        ll n,i,even=0,odd=0;
        cin>>n;
        ll a[n+5];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)even+=a[i];
            else odd+=a[i];
        }

        cout<<(even>odd ? yy: nn)<<nl;
    }

    return 0;
}



