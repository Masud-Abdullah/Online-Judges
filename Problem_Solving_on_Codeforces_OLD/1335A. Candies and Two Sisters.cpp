#include<bits/stdc++.h>
#define  nl         "\n"
#define  ll     long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        if(n<3)cout<<0<<nl;
        else if(n%2)cout<<n/2<<nl;
        else cout<<n/2-1<<nl;
    }

    return 0;
}


