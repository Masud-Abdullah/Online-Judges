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
    // cout<<"Hello"<<nl;
    int n;
    cin >> n;
    pii a[n + 1];

    int mx = INT_MIN;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].first >> a[i].second;
        mx = max(mx, a[i].second);
    }

    int visited[mx + 1];
    mm(visited, -1);

    sort(a + 1, a + n + 1);
    reverse(a + 1, a + n + 1);

    for (int i = 1; i <= n; i++)
    {
        if (visited[a[i].ss] == -1)
        {
            visited[a[i].ss] = a[i].ff;
            continue;
        }

        for (int j = a[i].ss; j >= 1; j--)
        {
            if (visited[j] == -1)
            {
                visited[j] = a[i].ff;
                break;
            }
        }
    }
    long long int cnt = 0;

    for (int i = 0; i <= mx; i++)
    {
        if (visited[i] != -1)
            cnt += visited[i];
    }

    cout << cnt << '\n';

    return 0;
}
