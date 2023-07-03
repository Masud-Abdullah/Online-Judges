#include<bits/stdc++.h>
#define   nl      "\n"
#define   ll      long long
#define   pii     pair<int,int>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

int main()
{
    ll n;
    cin>>n;

    if(n<2)cout<<0<<" "<<1<<nl;
    else if(n<=5)cout<<0<<" "<<2<<nl;
    else if(n<=6)cout<<1<<" "<<2<<nl;
    else
    {
        ll ans=(n/7)*2;
        ll ext=n-((n/7)*7);

        if(ext==0)cout<<ans<<" "<<ans<<nl;
        else if(ext==1)cout<<ans<<" "<<ans+1<<nl;
        else if(ext<=5)cout<<ans<<" "<<ans+2<<nl;
        else cout<<ans+1<<" "<<ans+2<<nl;
    }

    return 0;
}


