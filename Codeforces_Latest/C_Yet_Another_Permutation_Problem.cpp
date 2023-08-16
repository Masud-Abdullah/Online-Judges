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
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> a(n + 100);
//         int ans[n + 100];
//         for (int i = 1; i <= n; i++)
//         {
//             a[i] = i;
//         }

//         ans[0] = 0;
//         ans[1] = 1;
//         a[1] = -1;
//         ans[2] = 2;
//         a[2] = -1;
//         int indx = 3;
//         if (n <= 5)
//         {
//             if (n == 5)
//                 cout << "1 2 4 3 5" << nl;
//             else if (n == 4)
//                 cout << "1 2 4 3" << nl;
//             else if (n == 3)
//                 cout << "1 2 3" << nl;
//             else if (n == 2)
//                 cout << "1 2" << nl;
//             continue;
//         }

//         int tp = 1;
//         while (tp * 4 <= n)
//         {
//             ans[indx] = tp * 4;
//             a[tp * 4] = -1;
//             indx++;
//             tp *= 2;
//         }

//         for (int i = 3; i <= n; i++)
//         {
//             if (a[i] == -1)
//                 continue;

//             int x = i;
//             if (indx <= n)
//                 ans[indx] = x;
//             a[x] = -1;
//             indx++;
//             while (2 * x <= n && indx <= n)
//             {
//                 if (a[2 * x] == -1)
//                     continue;
//                 ans[indx] = 2 * x;
//                 a[2 * x] = -1;
//                 indx++;
//                 x *= 2;
//             }
//         }

//         for (int i = 1; i <= n; i++)
//         {
//             cout << ans[i] << " ";
//         }
//         cout << nl;
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
        vector<int> a(n);
        int cur = 0;
        for (int i = 1; i <= n; i += 2)
        {
            for (int j = i; j <= n; j *= 2)
            {
                a[cur++] = j;
            }
        }
        for (int i = 0; i < n; ++i)
        {
            cout << a[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}