#include<bits/stdc++.h>
#define   nl         "\n"
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define  FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;
    ll a,b,c,d;
    cin>>a>>b>>c>>d;

    ll m=max((3*a)/10,a-((a/250)*c));
    ll v=max((3*b)/10,b-((b/250)*d));

    if(m==v)cout<<"Tie"<<nl;
    else cout<<(m>v?"Misha":"Vasya")<<nl;


    return 0;
}


