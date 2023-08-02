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
const int MX = 1e6 + 9;
ll cnt[MX];
void divisorSum()
{
    for (int i = 1; i <= MX; i++)
    {
        for (int j = i; j <= MX; j += i)
        {
            cnt[j] += i;
        }
    }
}
int main()
{
    FIO;
    int t;
    cin >> t;
    divisorSum();
    while (t--)
    {
        ll n;
        cin >> n;
        // cout<<cnt[n]<<nl;
        ll ans = cnt[n] - n;
        if (ans > n)
            cout << "abundant\n";
        else if (ans < n)
            cout << "deficient\n";
        else
            cout << "perfect\n";
    }
    return 0;
}
