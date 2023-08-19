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
#define sz(v) v.size()
#define mm(a, x) memset(a, x, sizeof(a))
#define pi acos(-1.0)
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
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string x, y;
        cin >> x >> y;
        int cnt1[30] = {0};
        int cnt2[30] = {0};

        for (int i = 0; i < n; i++)
        {
            cnt1[x[i] - 96]++;
        }

        for (int i = 0; i < m; i++)
        {
            cnt2[y[i] - 96]++;
        }

        int mn = n + m + 1;
        bool f = true;
        for (int i = 1; i <= 26; i++)
        {
            if (cnt2[i] > 0)
            {
                int temp = (cnt1[i] / cnt2[i]);
                mn = min(mn, temp);
            }
        }

        cout << mn << nl;
    }

    return 0;
}
