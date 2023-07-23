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
/// sort(a,a+n,greater<int>()); Descending sort
/// sort(a,a+n); array sorting[0 base index]
/// reverse(a,a+n); array reverse[0 base index]
/// sort(s.begin(),s.end()); string sorting
/// reverse(s.begin(),s.end()); string reverse
/// int max_element = *max_element(a,a+n);[0 base index]
/// int min_element = *min_element(a,a+n);[0 base index]
/// int max_indx = max_element(a,a+n)-a;[0 base index]
/// int min_indx = min_element(a,a+n)-a;[0 base index]
/// isalpha(charracter) ei function int value return (0,1,2) kore.jodi >0 value return kore taile charracter ta alphabet ar naile alphabet na.
/// isalpha() 1 return korle charracter ta capital ar 2 return korle charracter ta small.
/// for converting string to integer: stoi(a); [a is the string ]
/// Substring_Check:
/// str1(main string)
/// str2(substring)
/// if((str1.find(str2) != string :: npos))yy;
/// else nn;

/// int a[n];
/// iota(a, a + n, 1);  >>>>>>>>>>>> eta diye n length er ekta array te 1-n porjonto value gulo sequentially set kora jay.
using namespace std;
int main()
{
    FIO;
    ll t, i;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n + 5];
        for (i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);

        bool f = true;
        int cnt = 0, ans = 0;

        for (i = 1; i < n; i++)
        {
            if (f == true)
            {
                if (a[i] - a[i - 1] <= k)
                {
                    cnt++;
                }
                else
                {
                    ans = max(cnt, ans);
                    cnt = 0;
                    f = false;
                }
            }
            else if (f == false)
            {
                if (a[i] - a[i - 1] <= k)
                {
                    cnt++;
                    f = true;
                }
            }
        }
        ans = max(cnt, ans);

        cout << n - ans - 1 << nl;
    }
    return 0;
}