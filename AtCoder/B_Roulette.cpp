#include <bits/stdc++.h>
#define nl "\n"
#define NN (cout << "NO\n")
#define YY (cout << "YES\n")
#define nn (cout << "No\n")
#define yy (cout << "Yes\n")
#define ss second
#define ff first
#define all(v) v.begin(), v.end()
#define ll long long int
#define ull unsigned long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vii vector<int>
#define vll vector<ll>
#define vpi vector<pii>
#define vpl vector<pll>
#define sz(v) int(v.size())
#define mm(a, x) memset(a, x, sizeof(a))
#define pi acos(-1.0)
#define ceil(a, b) (a + b - 1) / b
#define jog(v) accumulate(v.begin(), v.end(), 0)
#define gun(v) accumulate(v.begin(), v.end(), 1, multiplies<int>())
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{
    FIO;
    int n;
    cin >> n;
    vector<int> a[n];
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        for (int j = 0; j < c; j++)
        {
            int val;
            cin >> val;
            (a[i]).pb(val);
        }
    }

    int x, mn = INT_MAX;
    cin >> x;

    vector<pair<int, int>> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < sz(a[i]); j++)
        {
            if ((a[i])[j] == x)
            {
                ans.pb({i, sz(a[i])});
                if (mn > sz(a[i]))
                    mn = sz(a[i]);
            }
        }
    }

    sort(all(ans));
    int cnt = 0;
    for (int i = 0; i < sz(ans); i++)
    {
        if (ans[i].second == mn)
            cnt++;
    }

    cout << cnt << nl;

    for (int i = 0; i < sz(ans); i++)
    {
        if ((ans[i].second) == mn)
            cout << ans[i].first + 1 << " ";
    }
    cout << nl;

    return 0;
}
