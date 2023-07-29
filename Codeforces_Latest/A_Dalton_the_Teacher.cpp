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
    while (t--)
    {
        ll n, cnt = 0;
        cin >> n;
        ll a[n + 5];
        bool f = true;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == i + 1)
                f = false;
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] == i + 1)
                cnt++;
        }

        if (f)
            cout << 0 << nl;
        else
        {
            if (cnt % 2 == 0)
                cout << cnt / 2 << nl;
            else
                cout << cnt / 2 + 1 << nl;
        }
    }
    return 0;
}
