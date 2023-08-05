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
    int n, m;
    cin >> n >> m;
    int cnt[n + 1] = {0}, bnt[n + 1] = {0};
    pii a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i].first >> a[i].second;
        cnt[a[i].first]++;
        bnt[a[i].second]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (cnt[i] > 0 && bnt[i] == 0)
        {
            int f = 0;
            for (int j = 1; j <= n; j++)
            {
                if (j != i && bnt[j] > 0)
                    f++;
            }
            if (f == n - 1)
            {
                cout << i << nl;
                return 0;
            }
        }
    }
    cout << -1 << nl;

    return 0;
}
