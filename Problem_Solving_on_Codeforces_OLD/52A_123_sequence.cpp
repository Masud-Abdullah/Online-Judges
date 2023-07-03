#include<bits/stdc++.h>
#define   nl      "\n"
#define   ll      long long
#define   pii     pair<int,int>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main()
{
    ll n,i;
    cin>>n;

    ll a[n];
    for(i=0;i<n;i++)cin>>a[i];

    ll one=0,two=0,three=0;

    for(i=0;i<n;i++)
    {
        if(a[i]==1)one++;
        else if(a[i]==2)two++;
        else three++;
    }

    if(one>=two && one>three  || one>two && one>=three)cout<<two+three<<nl;
    else if(two>=one && two>three  || two>one && two>=three)cout<<one+three<<nl;
    else if(three>=one && three>two || three>one && three>=two) cout<<one+two<<nl;
    else if(one==two && two==three)cout<<one+two<<nl;
    else cout<<0<<nl;



    return 0;
}


