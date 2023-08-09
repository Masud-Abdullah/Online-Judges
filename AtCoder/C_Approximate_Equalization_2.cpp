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

    sort(a, a + n);
    ll dif = (a[0] + a[n - 1]) / 2;
    ll ans = abs(dif - a[0]) + abs(a[n - 1] - (dif + 1));
    // cout << ans<< '\n';
    for (int i = 1; i < n - 1; i++)
    {
        ans += (abs(dif - a[i]));
    }

    cout << ans / 2 << '\n';


    

    return 0;
}