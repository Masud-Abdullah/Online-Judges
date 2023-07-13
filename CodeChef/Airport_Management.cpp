#include <bits/stdc++.h>
#define   nl         "\n"
#define   nn         (cout << "NO\n")
#define   yy         (cout << "YES\n")
#define   ss         " "
#define   ll         long long
#define   ull        unsigned long long
#define   gcd(a, b)  __gcd(a, b)
#define   lcm(a, b)  ((a/gcd(a,b)) * b)
#define   pii        pair<int,int>
#define   pll        pair<long long,long long>
#define   sz(v)      (int)v.size()
#define   mm(a, x)   memset(a, x, sizeof(a))
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main() {
    FIO;
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    vector<ll> a;
	    for(ll i=0;i<n;i++)
	    {
	        ll x;
	        cin>>x;
	        a.push_back(x);
	    }
	    
	    for(ll i=0;i<n;i++)
	    {
	        ll x;
	        cin>>x;
	        a.push_back(x);
	    }
	    
	    sort(a.begin(),a.end());
	    ll cnt=0,tmp=0,x=a[0];
	    for(ll i=0;i<a.size();i++)
	    {
	        if(a[i]==x)
            {
                tmp++;
            }
            else
            {
                cnt=max(tmp,cnt);
                tmp=1;
                x=a[i];
            }
	    }
        cnt=max(cnt,tmp);
	    cout<<cnt<<nl;

	}
	return 0;
}

