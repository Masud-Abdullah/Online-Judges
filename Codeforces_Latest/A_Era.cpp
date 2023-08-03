// #include <bits/stdc++.h>
// #define nl "\n"
// #define nn (cout << "NO\n")
// #define yy (cout << "YES\n")
// #define ss " "
// #define ll long long
// #define ull unsigned long long
// #define gcd(a, b) __gcd(a, b)
// #define lcm(a, b) ((a / gcd(a, b)) * b)
// #define pii pair<int, int>
// #define pll pair<long long, long long>
// #define sz(v) (int)v.size()
// #define mm(a, x) memset(a, x, sizeof(a))
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
//         ll n;
//         cin >> n;
//         ll a[n + 5];
//         bool f = true;
//         for (int i = 1; i <= n; i++)
//         {
//             cin >> a[i];
//             if (i < a[i])
//                 f = false;
//         }

//         if (f == true)
//         {
//             cout << 0 << nl;
//             continue;
//         }

//         int cnt = 0, ext = 0;

//         for (int i = 1; i <= n; i++)
//         {
//             if (i + ext <= a[i])
//             {
//                 cnt += abs(a[i] - (i + ext));
//                 ext += abs(a[i] - (i + ext));
//             }
//         }

//         cout << cnt << nl;
//     }
//     return 0;
// }
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
        int a[n + 1];
        int mx = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (i < a[i])
            {
                mx = max(mx, abs(i - a[i]));
            }
        }
        cout << mx << '\n';
    }
    return 0;
}