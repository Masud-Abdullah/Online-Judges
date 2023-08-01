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
    if (n == 1)
        cout << 1 << nl;
    else if (n <= 3)
        cout << "NO SOLUTION" << nl;
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
                cout << i << " ";
        }
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
                cout << i << " ";
        }
        cout << nl;
    }
    return 0;
}
