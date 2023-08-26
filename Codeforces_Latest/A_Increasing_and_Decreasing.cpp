#include <bits/stdc++.h>
#define nl "\n"
#define all(v) v.begin(), v.end()
#define ll long long int
#define sz(v) v.size()
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
        int x, y, n;
        cin >> x >> y >> n;

        vector<int> ans;

        int cnt = 0;

        for (int i = 1; i <= n - 1; i++)
        {
            ans.push_back(y - cnt);
            y -= cnt;
            cnt++;
        }
        ans.push_back(x);
        int xt = sz(ans);
        reverse(all(ans));

        if (ans[1] >= x && ans[1] - ans[0] > ans[2] - ans[1])
        {
            for (int i = 0; i < sz(ans); i++)
            {
                cout << ans[i] << " ";
            }
            cout << nl;
        }
        else
            cout << -1 << nl;
    }
    return 0;
}
