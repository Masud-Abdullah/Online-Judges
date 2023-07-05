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
    ll a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1, greater<ll>());
    vector<ll> ans;

    for (int i = 1; i <= n; i++)
    {
        if (a[i] != -1)
        {
            ans.push_back(a[i]);
            int cmp = a[i], tmp = a[i];
            a[i] = -1;
            for (int j = i + 1; j <= n; j++)
            {
                if (a[j] != -1 && a[j] != cmp)
                {
                    if (tmp % a[j] == 0)
                    {
                        cmp = a[j];
                        a[j] = -1;
                    }
                }
            }
        }
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}