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
        ll n, p;
        cin >> n >> p;
        ll ans = p, tr = 1;
        pll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i].second;

        for (int i = 0; i < n; i++)
            cin >> a[i].first;
        sort(a, a + n);

        if (p <= a[0].first)
            cout << n * p << nl;
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (tr == n)
                    break;
                if (a[i].first >= p)
                {
                    ans += ((n - tr) * p);
                    break;
                }
                if (a[i].second >= (n - tr))
                {
                    ans += ((n - tr) * a[i].first);
                    tr += (n - tr);
                    break;
                }
                else if (a[i].second < (n - tr))
                {
                    tr += a[i].second;
                    ans += (a[i].second * a[i].first);
                }
            }
            cout << ans << nl;
        }
    }
    return 0;
}
