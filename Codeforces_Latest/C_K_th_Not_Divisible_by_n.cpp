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
// /// sort(a,a+n,greater<int>()); Descending sort
// /// sort(a,a+n); array sorting[0 base index]
// /// reverse(a,a+n); array reverse[0 base index]
// /// sort(s.begin(),s.end()); string sorting
// /// reverse(s.begin(),s.end()); string reverse
// /// int max_element = *max_element(a,a+n);[0 base index]
// /// int min_element = *min_element(a,a+n);[0 base index]
// /// int max_indx = max_element(a,a+n)-a;[0 base index]
// /// int min_indx = min_element(a,a+n)-a;[0 base index]
// /// isalpha(charracter) ei function int value return (0,1,2) kore.jodi >0 value return kore taile charracter ta alphabet ar naile alphabet na.
// /// isalpha() 1 return korle charracter ta capital ar 2 return korle charracter ta small.
// /// for converting string to integer: stoi(a); [a is the string ]
// /// Substring_Check:
// /// str1(main string)
// /// str2(substring)
// /// if((str1.find(str2) != string :: npos))yy;
// /// else nn;

// /// int a[n];
// /// iota(a, a + n, 1);  >>>>>>>>>>>> eta diye n length er ekta array te 1-n porjonto value gulo sequentially set kora jay.
// using namespace std;
// int main()
// {
//     FIO;
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, k;
//         cin >> n >> k;

//         ll x = k / (n - 1); // Asif Abdullah//
//         ll ans = x + k;

//         if (ans % n == 0)
//             ans--;

//         cout << ans << nl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
#define endl '\n'
#define yes "YES"
#define no "NO"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define pll pair<long long, long long>
#define rev(a) reverse(a, a + n);
#define Srev(s) reverse(s.begin(), s.end());
#define sz(s) s.size()
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

    int test;
    cin >> test;

    while (test--)
    {
        ll n, k;
        cin >> n >> k;

        if (k == 1)
            cout << 1 << endl;
        else
        {
            ll val;
            if (k < n)
                cout << k << endl; // Muhammad Sayem//
            else
            {
                if (k % (n - 1) == 0)
                    val = k / (n - 1);
                else if (k % (n - 1) != 0)
                    val = (k / (n - 1)) + 1;

                cout << k + val - 1 << endl;
            }
        }
    }

    return 0;
}
