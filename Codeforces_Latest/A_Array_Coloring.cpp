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
//         ll n, sm = 0;
//         cin >> n;
//         ll a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             sm += a[i];
//         }
//         bool f = false;
//         for (int i = 0; i < n; i++)
//         {
//             if ((a[i] % 2 == 0 && (sm - a[i]) % 2 == 0) || (a[i] % 2 != 0 && (sm - a[i]) % 2 != 0))
//             {
//                 f = true;
//                 break;
//             }
//         }
//         if (f)
//             yy;
//         else
//             nn;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define CC(x) cout << "Case " << ++x << ":";
#define nn "\n"
#define LL_INF (1LL << 62)
#define INF (1 << 30)
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)
#define mod 1000000007
#define N 200005

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int sm = 0;
        while (n--)
        {
            int x;
            cin >> x;
            sm += x;
        }

        if (sm % 2 == 0)
            YES;
        else
            NO;
    }
    return 0;
}
