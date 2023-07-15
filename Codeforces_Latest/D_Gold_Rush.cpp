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
// bool gold(ll n, ll m)
// {
//     if (n == m)
//         return true;

//     if (n < m || n % 3 != 0)
//         return false;

//     bool left = gold((n / 3), m);
//     bool right = gold((n / 3) * 2, m);
//     if (left == true || right == true)
//         return true;
//     else
//         return false;
// }
// int main()
// {
//     FIO;
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, m;
//         cin >> n >> m;

//         if (gold(n, m) == true)
//             yy;
//         else
//             nn;
//     }
//     return 0;
// }
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
bool gold(ll n, ll m)
{
    if (n == m)
        return true;

    if (n < m || n % 3 != 0)
        return false;    

    bool left = gold((n / 3), m);
    bool right = gold((n / 3) * 2, m);
    return (left || right);
}
int main()
{
    FIO;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        if (gold(n, m))
            yy;
        else
            nn;
    }
    return 0;
}
