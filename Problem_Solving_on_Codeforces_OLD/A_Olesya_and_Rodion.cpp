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
// #define sz(v) v.size()
// #define mm(a, x) memset(a, x, sizeof(a))
// #define FIO                       \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// /// sort(a,a+n); array sorting[0 base index]
// /// reverse(a,a+n); array reverse[0 base index]
// /// sort(s.begin(),s.end()); string sorting
// /// reverse(s.begin(),s.end()); string reverse
// /// int max_element = *max_element(a,a+n);[0 base index]
// /// int min_element = *min_element(a,a+n);[0 base index]
// /// int max_indx = max_element(a,a+n)-a;[0 base index]
// /// int min_indx = min_element(a,a+n)-a;[0 base index]

// /// Substring_Check:
// /// str1(main string)
// /// str2(substring)
// /// if((str1.find(str2) != string :: npos))yy;
// /// else nn;
// using namespace std;
// int main()
// {
//     FIO;
//     int n, k;
//     cin >> n >> k;

//     if (k == 10 && n % 2 != 0)
//     {
//         if (n == 1)
//             cout << -1 << nl;
//         else
//         {
//             for (int i = 1; i <= n-1; i++)
//             {
//                 cout << 1;
//             }
//             cout << 0 << nl;
//         }
//     }
//     else if (k == 10 && n % 2 == 0)
//     {
//         for (int i = 1; i <= n / 2; i++)
//         {
//             cout << k;
//         }
//         cout << nl;
//     }
//     else
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             cout << k;
//         }
//         cout << nl;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pb push_back
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define fastIO                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{
    fastIO;

    int n, t, i;
    cin >> n >> t; //Muhammad Sayem

    // if(n == 1 && t == 10) cout << -1;

    if (t <= 9)
    {
        for (i = 0; i < n; i++)
        {
            cout << t;
        }
    }
    else
    {
        if (n == 1)
            cout << -1;
        else
        {
            for (i = 0; i < n - 1; i++)
            {
                cout << 1;
            }
            cout << 0;
        }
    }

    return 0;
}
