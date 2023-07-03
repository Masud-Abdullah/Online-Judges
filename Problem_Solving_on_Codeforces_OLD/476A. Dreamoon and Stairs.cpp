#include<bits/stdc++.h>
#define   nl         "\n"
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;
    ll n,m;
    cin>>n>>m;

    if(n<m)
    {
        cout<<-1<<nl;
        return 0;
    }

        if((n/2%m==0 && (n/2)+(n/2)==n))
        {
            cout<<n/2<<nl;
            return 0;
        }
        else
        {
            ll x=(n/2)+1;
            while(x<=n)
            {
                if(x%m==0)
                {
                    cout<<x<<nl;
                     return 0;
                }
                else x++;
            }
        }
        cout<<-1<<nl;

    return 0;
}
