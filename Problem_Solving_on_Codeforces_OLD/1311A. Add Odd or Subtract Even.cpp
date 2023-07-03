#include<bits/stdc++.h>
#define   nl      "\n"
#define   ll      long long
#define   pii     pair<int,int>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;

        if(a==b)cout<<0<<nl;
        else if(a<b && abs(a-b)%2!=0)cout<<1<<nl;
        else if(a>b && abs(a-b)%2==0)cout<<1<<nl;
        else cout<<2<<nl;
    }

    return 0;
}


