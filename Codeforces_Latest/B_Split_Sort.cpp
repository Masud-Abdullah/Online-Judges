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
//         int a[n], cnt[n + 1] = {0}, ans = 0;
//         for (int i = 0; i < n; i++)
//             cin >> a[i];

//         if (n == 1)
//             cout << 0 << nl;
//         else
//         {
//             for (int i = 0; i < n; i++)
//             {
//                 cnt[a[i]]++;
//                 if (a[i] != 1 && cnt[a[i] - 1] == 1)
//                     ans++;
//             }
//             cout << n - 1 - ans << nl;
//         }
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
        int a[n];
        map<int, int> mp;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mp[x] = i;
        }

        int count = 0;
        for (int i = 2; i <= n; i++)
        {
            if (mp[i] < mp[i - 1])
                count++;
        }
        cout << count << endl;
    }
    return 0;
}