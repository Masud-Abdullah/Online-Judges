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
const ll N = 1e8+5;//99998953;
//bool prime[N];
bitset<N>prime;
void sieve() 
{ 
    //memset(prime, true, sizeof(prime)); 
    prime[0]=prime[1]=1;
    for (int p = 2; p*p< N; p++) 
    { 
        if (!prime[p])
        { 
            for (int i = p * p; i < N; i += p) 
                prime[i] = 1; 
        } 
    } 
} 
 
int main()
{
    FIO; 
    sieve();
    vector<ll>ans;
    for(int i=0;i<N;i++)
    {
        if(!prime[i])ans.pb(i);
    }
    ll cnt=0;
    for(int i=0;i<ans.size();i+=100)
    {
        cout<<ans[i]<<nl;
    }
    return 0;
}

