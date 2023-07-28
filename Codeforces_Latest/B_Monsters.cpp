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
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
        return a.second < b.second;
    else
        return a.first > b.first;
}
int main()
{
    FIO;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<int> ans;
        vector<pair<int, int>> tmp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % k)
                tmp.push_back({x % k, i + 1});
            else
                ans.push_back(i + 1);
        }

        sort(tmp.begin(), tmp.end(), cmp);

        for (int i = 0; i < sz(tmp); i++)
        {
            ans.push_back(tmp[i].second);
        }

        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << nl;
    }
    return 0;
}
