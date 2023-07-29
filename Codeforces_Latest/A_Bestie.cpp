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
        int a[n + 5];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int gc = a[1];
        for (int i = 1; i <= n; i++) // tutorial
            gc = __gcd(gc, a[i]);

        if (gc == 1)
            cout << 0 << endl;
        else if (__gcd(gc, n) == 1)
            cout << 1 << endl;
        else if (__gcd(gc, n - 1) == 1)
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }
    return 0;
}

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
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int a[n + 5];

//         for (int i = 1; i <= n; i++)
//         {
//             cin >> a[i];
//         }

//         int gc = a[1];
//         for (int i = 1; i <= n; i++)
//         {
//             gc = gcd(a[i], gc);
//         }

//         if (gc == 1)
//             cout << 0 << nl;
//         else
//         {
//             int ans = INT_MAX;
//             for (int i = n; i >= 1; i--)
//             {
//                 int x = a[i];
//                 a[i] = gcd(a[i], i);
//                 gc = a[i]; // ekhane array er je kono ekta index dilei hobe.
//                 // bool f = false;
//                 for (int j = 1; j <= n; j++)
//                 {
//                     gc = gcd(a[j], gc);
//                 }

//                 if (gc == 1)
//                 {
//                     // cout << n - i + 1 << nl;
//                     //  cout<<"Tamim"<<i<<nl;
//                     // break;
//                     ans = min(ans, n - i + 1);
//                 }

//                 a[i] = x;
//             }
//             cout << ans << '\n';
//         }
//     }
//     return 0;
// }
