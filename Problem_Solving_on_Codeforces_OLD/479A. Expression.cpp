#include<bits/stdc++.h>
#define  nl         "\n"
#define  ll     long long
using namespace std;
int main()
{
    ll a,b,c;
    cin>>a>>b>>c;

    ll p=a+b+c;
    ll q=a*b*c;
    ll r=a+(b*c);
    ll s=(a*b)+c;
    ll t=(a+b)*c;
    ll u=a*(b+c);


    cout<<max({p,q,r,s,t,u})<<endl;
    return 0;
}


