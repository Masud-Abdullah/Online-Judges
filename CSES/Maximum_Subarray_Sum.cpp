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
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll ans = INT_MIN, tmp = 0;

    for (int i = 0; i < n; i++)
    {
        tmp += a[i];
        if (ans < tmp)
        {
            ans = tmp; // kadane algorithm for maximum subarray sum
        }

        if (tmp < 0)
        {
            tmp = 0;
        }
    }

    cout << ans << nl;

    return 0;
}
