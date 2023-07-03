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

// /// int a[n];
// /// iota(a, a + n, 1);  >>>>>>>>>>>> eta diye n length er ekta array te 1-n porjonto value gulo sequentially set kora jay.
// using namespace std;
// int bishop(int r1, int c1, int r2, int c2)
// {
//     if ((r1 + c1) % 2 != (r2 + c2) % 2)
//         return 0;
//     else
//     {
//         if (r1 + c1 == r2 + c2 || r1 - c1 == r2 - c2)
//             return 1;
//         else
//             return 2;
//     }
// }
// int main()
// {
//     FIO;
//     // rook,bishop,king
//     int r1, c1, r2, c2;
//     cin >> r1 >> c1 >> r2 >> c2;

//     if (r1 == r2 && c1 == c2)
//         cout << 0 << ss << 0 << ss << 0 << nl;
//     else if (r1 == r2 || c1 == c2)
//     {
//         cout << 1 << ss;
//         cout << bishop(r1, c1, r2, c2) << ss;
//         if (r1 == r2)
//             cout << abs(c1 - c2) << nl;
//         else
//             cout << abs(r1 - r2) << nl;
//         // cout<<max(abs(r1-r2),abs(c1-c2))<<nl;
//     }
//     else
//     {
//         cout << 2 << ss;
//         cout << bishop(r1, c1, r2, c2) << ss;
//         cout<<max(abs(r1-r2),abs(c1-c2))<<nl;
//         //cout << min(bishop(r1, c1, r2, c2)/min(), abs(r1 - r2) + abs(c1 - c2)) << nl;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r1, c1, r2, c2;   //Tutorial
    cin >> r1 >> c1 >> r2 >> c2;
    if (r1 == r2 || c1 == c2)cout << 1;
    else cout << 2;
    cout << " ";
    if ((r1 + c1) % 2 != (r2 + c2) % 2)cout << 0;
    else
    {
        if (r1 + c1 == r2 + c2 || r1 - c1 == r2 - c2)cout << 1;
        else cout << 2;
    }
    cout << " ";
    cout << max(abs(r1 - r2), abs(c1 - c2)) << endl;
    return 0;
}