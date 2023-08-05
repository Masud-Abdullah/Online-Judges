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
        int n, mx = 0;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }

        sort(b, b + n);
        if (a[n - 1] != b[n - 1])
        {
            cout << b[n - 1] << nl;
        }
        else
        {
            int ans = -1;
            for (int i = 0; i < n; i++)
            {
                if (a[i] != b[i])
                {
                    ans = b[i];
                }
            }
            if (ans == -1)
                cout << 0 << nl;
            else
                cout << ans << nl;
        }
    }
    return 0;
}
