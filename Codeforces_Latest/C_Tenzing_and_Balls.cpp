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
#define sz(v) v.size()
#define mm(a, x) memset(a, x, sizeof(a))
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{
    FIO;
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int indx = 2 * 100000;
        pair<int, int> cnt[indx + 1];
        for (int i = 1; i <= indx; i++)
        {
            cnt[i].first = 0;
            cnt[i].second = 0;
        }
        for (int i = 1; i <= n; i++)
        {
            if (cnt[a[i]].first == 0)
            {
                cnt[a[i]].first = i;
            }
            cnt[a[i]].second = i;
        }

        // for(int i=1;i<=indx;i++)
        // {
        //     if(cnt[i].first)cout<<cnt[i].first<<" "<<cnt[i].second<<endl;
        // }

        int i = 1, ans = 0;
        while (i <= n)
        {
            if (cnt[a[i]].second == cnt[a[i]].first)
            {
                i++;
            }
            else if (cnt[a[i]].second > cnt[a[i]].first && i == cnt[a[i]].first)
            {
                ans += (cnt[a[i]].second - cnt[a[i]].first) + 1;
                i = cnt[a[i]].second + 1;
            }
            else
                i++;
        }
        cout << ans << endl;
    }
    return 0;
}
