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
        ll x,n,m;
        cin>>x>>n>>m;

        ll a=x,b=n,c=m;
        while(n>0 && x>0)
        {
                n--;
                x=(x/2)+10;
        }

        while(m>0 && x>0)
        {
                m--;
                x=x-10;
        }

        while(c>0 && a>0)
        {
                c--;
                a=a-10;
        }

        while(b>0 && a>0)
        {
                b--;
                a=(a/2)+10;
        }

        //cout<<x<<" "<<a<<nl;
        if(min(x,a)<=0)cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }

    return 0;
}


