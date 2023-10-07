#include <bits/stdc++.h>
#define nl "\n"
#define NN (cout << "NO\n")
#define YY (cout << "YES\n")
#define nn (cout << "No\n")
#define yy (cout << "Yes\n")
#define ss second
#define ff first
#define all(v) v.begin(), v.end()
#define ll long long int
#define ull unsigned long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vii vector<int>
#define vll vector<ll>
#define vpi vector<pii>
#define vpl vector<pll>
#define sz(v) v.size()
#define mm(a, x) memset(a, x, sizeof(a))
#define pi acos(-1.0)
#define ceil(a, b) (a + b - 1) / b
#define jog(v) accumulate(v.begin(), v.end(), 0)
#define gun(v) accumulate(v.begin(), v.end(), 1, multiplies<int>())
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
ll cnt, ex, xe;
ll ans(ll n, ll m)
{
    xe++;
    if (xe == 60)    //Jehetu complexity logN tai maximum 60 ta step holei cnt 
        return -1;

    while (n < m)
    {
        cnt += (n);
        n *= 2;
    }

    if (n % m == 0)
        return cnt;
    else
        ans((n % m), m);
}
int main()
{
    FIO;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        if (n % m == 0)
            cout << 0 << nl;
        else if (m % 2)
            cout << -1 << nl;
        else
        {
            ll xt = n % m;
            cnt = 0;
            ex = 0;
            xe = 0;
            ll x = ans(xt, m);
            cout << x << nl;
        }
    }
    return 0;
}
