#include<bits/stdc++.h>
#define   nl         "\n"
#define   nn         (cout << "NO\n")
#define   yy         (cout << "YES\n")
#define   ss         " "
#define   ll         long long
#define   pi         pair<int,int>
#define   rv(v)      v.begin(),v.end()
#define   sz(v)      v.size()
#define   mm(a,x)    memset(a,x,sizeof(a))
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;
    int t;
    cin>>t;
    while(t--)
    {
        ll n,ans=1;
        cin>>n;
        for(ll i=2;i<=sqrt(n);i++)
        {
            if(i*i<=n && i*i*i<=n)ans++;
            else if(i*i<=n)ans++;
            else if(i*i*i<=n)ans++;
        }
        cout<<ans<<nl;
    }


    return 0;
}

