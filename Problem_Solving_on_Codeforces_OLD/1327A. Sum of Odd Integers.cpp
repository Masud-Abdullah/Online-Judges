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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        if(n%2!=0 && k%2!=0 && k<=sqrt(n))cout<<"YES"<<nl;
        else if(n%2==0 && k%2==0 && k<=sqrt(n))cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }

    return 0;
}



