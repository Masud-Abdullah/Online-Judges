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
    pii a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(a, a + n);
    int l = 0, r = n - 1;
    while (l < r)
    {
        if (a[l].first + a[r].first == k)
        {
            cout << a[l].second << " " << a[r].second << nl;
            return 0;
        }

        if (a[l].first + a[r].first < k)
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}
