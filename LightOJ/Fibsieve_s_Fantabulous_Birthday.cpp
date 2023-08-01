#include <bits/stdc++.h>
#define nl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ss " "
#define ll long long
#define ull unsigned long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define pii pair<int, int>
#define pll pair<long long, long long>
#define sz(v) (int)v.size()
#define mm(a, x) memset(a, x, sizeof(a))
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
    for (int i = 1; i <= t; i++)
    {
        cout << "Case " << i << ": ";
        ll n;
        cin >> n;
        ll ans = ceil(sqrt(n));

        if (ans % 2 == 0)
        {
            ll x = ans, y = ans - 1;
            ll res = (((x * x) + (y * y)) + 1) / 2;
            if (n == res)
                cout << ans << " " << ans << nl;
            else if (n > res)
            {
                ll tp = ans * ans; // tp= 16
                cout << ans << " " << (tp - n) + 1 << nl;
            }
            else
            {
                cout << ans - (res - n) << " " << ans << nl;
            }
        }
        else
        {
            ll x = ans, y = ans - 1;
            ll res = (((x * x) + (y * y)) + 1) / 2;
            if (n == res)
                cout << ans << " " << ans << nl;
            else if (n < res)
            {
                int tp = ans * ans;
                cout << ans << " " << ans - (res - n) << nl;
            }
            else
            {
                cout << ans - (n - res) << " " << ans << nl;
            }
        }
    }
    return 0;
}
