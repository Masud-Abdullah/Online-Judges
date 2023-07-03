#include<bits/stdc++.h>
#define   nl      "\n"
#define   ll      long long
#define   pii     pair<int,int>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main()
{

    ll n, m;
    cin>> n >> m;
    ll days=n+((n-1)/(m-1));

    cout<<days<<nl;

    return 0;
}

