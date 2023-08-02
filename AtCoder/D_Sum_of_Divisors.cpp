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
const int mx = 1e7 + 7;
ll cnt[mx];
void divisor()
{
    for (int i = 1; i <= mx; i++)
    {
        for (int j = i; j <= mx; j += i)
        {
            cnt[j]++;
        }
    }
}
int main()
{
    FIO;
    divisor();
    ll n, x;
    cin >> n;
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        x = i * cnt[i];
        ans += x;
    }
    cout << ans << nl;
    return 0;
}
