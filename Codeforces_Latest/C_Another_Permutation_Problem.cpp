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
int main()
{
    FIO;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll ans = 0;
        for (ll i = 0; i <= n; i++)
        {
            ll rs = 0, mx = 0;
            for (ll l = 1; l <= i; l++)
            {
                rs += l * l;
                mx = max(mx, l * l);
            }
            // First er theke all possible segment niye then shesher theke remaining all
            //  possible segment reverse kore dekhtesi je kon segment theke best output pawa jay.
            // reverse korar karon just obserbation
            for (ll j = n, k = i + 1; j >= i + 1; j--, k++)
            {
                rs += j * k;
                mx = max(mx, j * k);
            }
            ans = max(ans, rs - mx);
        }
        cout << ans << nl;
    }
    return 0;
}
