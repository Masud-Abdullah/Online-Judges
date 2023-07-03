#include<bits/stdc++.h>
#define   nl         "\n"
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;
    ll a,b,i,fact=1;
    cin>>a>>b;

    ll x=min(a,b);

    for(i=1;i<=x;i++)
    {
        fact*=i;
    }
    cout<<fact<<nl;


    return 0;
}



