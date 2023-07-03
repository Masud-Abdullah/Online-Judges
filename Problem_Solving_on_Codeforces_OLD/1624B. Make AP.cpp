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
        ll a,b,c;
        cin>>a>>b>>c;

        if(abs(a-b)==abs(b-c))cout<<"YES"<<nl;
        else
        {
            if(min({a,b,c})==a && a==b && a!=c)
            {
                ll x=abs(c-a);
                b*=(a+x)/b;
                if(abs(a-b)==abs(b-c))cout<<"YES"<<nl;
                else cout<<"NO"<<nl;
            }
            else if(min({a,b,c})==b && b==c && a!=b)
            {
                ll x=abs(a-c);
                b*=(b+x)/b;
                if(abs(a-b)==abs(b-c))cout<<"YES"<<nl;
                else cout<<"NO"<<nl;

            }
            else if(min({a,b,c})==a && a==c && a!=b)
            {
                ll x=abs(b-a);
                c*=(b+x)/x;
                if(abs(a-b)==abs(b-c))cout<<"YES"<<nl;
                else cout<<"NO"<<nl;
            }
            else if(min({a,b,c})==a)
            {
                ll x=abs(b-c);
                a*=(b-x)/a;
                if(abs(a-b)==abs(b-c))cout<<"YES"<<nl;
                else cout<<"NO"<<nl;
            }
            else if(min({a,b,c})==b)
            {
                ll x=a+c/2;
                b*=(x/b);
                if(abs(a-b)==abs(b-c))cout<<"YES"<<nl;
                else cout<<"NO"<<nl;
            }
            else if(min({a,b,c})==c)
            {
                ll x=abs(b-a);
                c*=(b+x)/c;
                if(abs(a-b)==abs(b-c))cout<<"YES"<<nl;
                else cout<<"NO"<<nl;
            }
            else cout<<"NO"<<nl;
        }
    }
 return 0;

}


