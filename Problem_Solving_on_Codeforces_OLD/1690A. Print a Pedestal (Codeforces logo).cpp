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
        ll n;
        cin>>n;
        if(n%3==0)cout<<n/3<<" "<<n/3+1<<" "<<n/3-1<<nl;
     else if(n%3==1)cout<<n/3<<" "<<n/3+2<<" "<<n/3-1<<nl;
     else cout<<n/3+1<<" "<<n/3+2<<" "<<n/3-1<<nl;

    }

    return 0;
}

