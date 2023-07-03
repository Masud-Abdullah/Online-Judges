#include<bits/stdc++.h>
#define   nl      "\n"
#define   ll      long long
#define   pii     pair<int,int>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

int main()
{
    ll a[3],i;
    for(i=0;i<3;i++)cin>>a[i];

    sort(a,a+3);

    cout<<a[2]-a[0]<<nl;

    return 0;
}


