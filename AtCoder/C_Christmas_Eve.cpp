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
    int n, k;
    cin >> n >> k;
    int h[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> h[i];

    sort(h + 1, h + n + 1);

    int x = 1, y = k;
    int mn = abs(h[x] - h[y]);
    for (int i = k + 1; i <= n; i++)
    {
        x++;
        y++;
        mn = min(mn, abs(h[x] - h[y]));
    }

    cout << mn << nl;
    return 0;
}
