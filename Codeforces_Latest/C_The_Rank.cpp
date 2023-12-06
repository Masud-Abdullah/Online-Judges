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
bool cmp(pll a, pll b)
{
    if (a.ff == b.ff)
        return a.ss < b.ss;
    else return a.ff > b.ff;
}
int main()
{
    FIO;
    ll n;
    cin >> n;
    pll a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        ll w, x, y, z;
        cin >> w >> x >> y >> z;
        a[i].ff = (w + x + y + z);
        a[i].ss = i;
    }
    sort(a + 1, a + n + 1, cmp);
    for (int j = 1; j <= n; j++)
    {
        if (a[j].ss == 1)
        {
            cout << j << nl;
            break;
        }
        // cout << a[j].ff << " " << a[j].ss << nl;
    }
    return 0;
}
