#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a[n + 5];
        for (int i = 1; i <= n; i++)
        {
            int m;
            cin >> m;
            for (int j = 1; j <= m; j++)
            {
                int x;
                cin >> x;
                a[i].push_back(x);
            }
            sort(a[i].begin(), a[i].end());
        }

        long long sum = 0;
        int mn = INT_MAX;
        for (int i = 1; i <= n; i++)
        {
            sum += (a[i])[1];
            mn = min(mn, (a[i])[1]);
        }
        sum -= mn;
        int men = INT_MAX;
        for (int i = 1; i <= n; i++)
        {
            men = min(men, (a[i])[0]);
        }

        cout << sum + men << '\n';
    }
    return 0;
}

// #include <bits/stdc++.h>
// #define nl "\n"
// #define NN (cout << "NO\n")
// #define YY (cout << "YES\n")
// #define nn (cout << "No\n")
// #define yy (cout << "Yes\n")
// #define ss second
// #define ff first
// #define all(v) v.begin(), v.end()
// #define ll long long int
// #define ull unsigned long long
// #define gcd(a, b) __gcd(a, b)
// #define lcm(a, b) ((a / gcd(a, b)) * b)
// #define pb push_back
// #define mp make_pair
// #define pii pair<int, int>
// #define pll pair<long long, long long>
// #define vii vector<int>
// #define vll vector<ll>
// #define vpi vector<pii>
// #define vpl vector<pll>
// #define sz(v) v.size()
// #define mm(a, x) memset(a, x, sizeof(a))
// #define pi acos(-1.0)
// #define ceil(a, b) (a + b - 1) / b
// #define jog(v) accumulate(v.begin(), v.end(), 0)
// #define gun(v) accumulate(v.begin(), v.end(), 1, multiplies<int>())
// #define FIO                       \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// using namespace std;
// int main()
// {
//     FIO;
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<vector<int>> ans(n);
//         for (int i = 1; i <= n; i++)
//         {
//             int m;
//             cin >> m;
//             for (int j = 1; j <= m; j++)
//             {
//                 int x;
//                 cin >> x;
//                 ans[i].pb(x);
//             }
//             sort(ans[i].begin(), ans[i].end());
//         }
//         int sum = 0, mn = INT_MAX;
//         // for (int i = 1; i <= n; i++)
//         // {
//         //     sum += ans[i][2];
//         //     mn = min(mn, ans[i][2]);
//         // }
//         // sum -= mn;
//         // int men = INT_MAX;
//         // for (int i = 1; i <= n; i++)
//         // {
//         //     men = min(men, ans[i][1]);
//         // }

//         cout<<sum<<nl;
//         // for (int i = 1; i <= sz(ans[1]); i++)
//         // {
//         //     cout << ans[1][i] << " ";
//         // }
//         // cout << nl;
//     }
//     return 0;
// }
