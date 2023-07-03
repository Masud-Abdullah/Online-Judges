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
        ll n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll b[n];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        vector<ll> x(2 * n + 1), y(2 * n + 1);
        ll cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
                cnt++;
            else
            {
                x[a[i - 1]] = max(x[a[i - 1]], cnt);
                cnt = 1;
            }
        }
        x[a[n - 1]] = max(cnt, x[a[n - 1]]);
        cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (b[i] == b[i - 1])
                cnt++;
            else
            {
                y[b[i - 1]] = max(y[b[i - 1]], cnt);
                cnt = 1;
            }
        }
        y[b[n - 1]] = max(cnt, y[b[n - 1]]);

        ll ans = 0;
        n *= 2;
        for (int i = 1; i <= n; i++)
        {
            ans = max(ans, x[i] + y[i]);
        }
        cout << ans << nl;
    }
    return 0;
}

// using namespace std;
// int main()
// {
//     FIO;
//     ll t;
//     cin >> t;
//     for (int q = 1; q <= t; q++)
//     {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++)
//             cin >> a[i];

//         vector<int> b(n);
//         for (int i = 0; i < n; i++)
//             cin >> b[i];

//         // for A
//         int cntA = 0, tmA = 0, xA = a[0], valA;
//         for (int i = 0; i < n; i++)
//         {
//             if (a[i] == xA)
//             {
//                 tmA++;
//                 xA = a[i];
//             }
//             else
//             {
//                 if (tmA > cntA)
//                     valA = xA;
//                 cntA = max(tmA, cntA);
//                 tmA = 1;
//                 xA = a[i];
//             }
//         }
//         if (tmA > cntA)
//             valA = xA;
//         cntA = max(tmA, cntA);

//         int Acnt = 0, Atm = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (b[i] == valA)
//             {
//                 Atm++;
//             }
//             else
//             {
//                 Acnt = max(Acnt, Atm);
//                 Atm = 0;
//             }
//         }
//         Acnt = max(Acnt, Atm);

//         // for B
//         int cntB = 0, tmB = 0, xB = b[0], valB;
//         for (int i = 0; i < n; i++)
//         {
//             if (b[i] == xB)
//             {
//                 tmB++;
//                 xB = b[i];
//             }
//             else
//             {
//                 if (tmB > cntB)
//                     valB = xB;
//                 cntB = max(tmB, cntB);
//                 tmB = 1;
//                 xB = b[i];
//             }
//         }
//         if (tmB > cntB)
//             valB = xB;
//         cntB = max(tmB, cntB);

//         int Bcnt = 0, Btm = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (a[i] == valB)
//             {
//                 Btm++;
//             }
//             else
//             {
//                 Bcnt = max(Bcnt, Btm);
//                 Btm = 0;
//             }
//         }
//         Bcnt = max(Bcnt, Btm);

//         int ans1 = cntA + Acnt;
//         int ans2 = cntB + Bcnt;
//         cout << max(ans1, ans2) << nl;

//         // cout << cntA << " " << aa << " " << cntB << " " << bb << nl;
//     }
//     return 0;
// }