#include <bits/stdc++.h>
#define   nl         "\n"
#define   NN         (cout << "NO\n")
#define   YY         (cout << "YES\n")
#define   nn         (cout << "No\n")
#define   yy         (cout << "Yes\n")
#define   ss         second
#define   ff         first
#define   all(v)     v.begin(),v.end()
#define   ll         long long int
#define   ull        unsigned long long
#define   gcd(a, b)  __gcd(a, b)
#define   lcm(a, b)  ((a/gcd(a,b)) * b)
#define   pb         push_back
#define   mp         make_pair
#define   pii        pair<int,int>
#define   pll        pair<long long,long long>
#define   vii        vector< int >
#define   vll        vector< ll >
#define   vpi        vector< pii >
#define   vpl        vector<pll>
#define   sz(v)      v.size()
#define   mm(a, x)   memset(a, x, sizeof(a))
#define   pi         acos(-1.0)
#define   ceil(a,b)  (a+b-1)/b
#define   jog(v)     accumulate(v.begin(), v.end(), 0)
#define   gun(v)     accumulate(v.begin(), v.end(), 1, multiplies<int>())
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        if(n%2==1)
        {
            a[1]=1;
            for(int i=2;i<=n;i++)
            {
                a[i]=i+1;
                a[i+1]=i;
                i++;
            }
        }
        else
        {
            a[1]=1;
            a[2]=2;
            for(int i=3;i<=n;i++)
            {
                a[i]=i+1;
                a[i+1]=i;
                i++;
            }
        }
        ll ans=0;
        for(int i=1;i<=n;i++)
        {
            ans+=(a[i]*i);
        }
        ans-=(a[n-1]*a[n]);
        cout<<ans<<nl;
        // for(int i=0;i<n;i++)
        // {
        //     cout<<a[i]<<" ";
        // }
        // cout<<nl;
    }
    return 0;
}

