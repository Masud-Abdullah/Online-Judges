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

        sort(a, a + n);

        ll sm = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 1)
                sm += a[i] - 1;

            if (a[i] == 1)
                cnt++;
        }

        if (n == 1)
            nn;
        else if (cnt <= sm)
            yy;
        else
            nn;
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
//         ll n;
//         cin >> n;
//         ll a[n], b[n], cnt = 0, bnt = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             b[i] = a[i];
//         }

//         sort(a, a + n);
//         sort(b, b + n, greater<int>());
//         int x = -1,y;
//         vector<int> ans;
//         for (int i = 0; i < n; i++)
//         {
//             if (a[i] == b[i])
//             {
//                 cnt++;
//                 ans.push_back(a[i]);
//                 x=a[i];
//             }
//         }

//         if (x == -1)
//         {
//             yy;
//             continue;
//         }

//         sort(ans.begin(),ans.end());
//         x=ans[0];
//         y=ans[ans.size()-1];

//         for (int i = 0; i < n; i++)
//         {
//             if ((a[i] != x && b[i] != x && a[i] != b[i]) &&(a[i] != y && b[i] != y && a[i] != b[i]))
//             {
//                 bnt++;
//             }
//         }

//         if (cnt <= bnt && a[0]!=a[n-1])
//             yy;
//         else
//             {

//             }

//         // for (int i = 0; i < n; i++)
//         // {
//         //     cout << a[i] << " ";
//         // }
//         // cout<<nl;

//         // for (int i = 0; i < n; i++)
//         // {
//         //     cout << b[i] << " ";
//         // }
//         // cout<<nl;
//         // if(f && n>1)yy;
//         // else nn;
//     }
//     return 0;
// }
