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
    ll t,s,x;
    cin>>t>>s>>x;

    if(x==t+1 || t>x)cout<<"NO"<<nl;
    else if((x-t)%s==0 || (x-1-t)%s==0)cout<<"YES"<<nl;
    else cout<<"NO"<<nl;

    return 0;
}


