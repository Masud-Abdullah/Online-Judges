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
/// sort(a,a+n); array sorting[0 base index]
/// reverse(a,a+n); array reverse[0 base index]
/// sort(s.begin(),s.end()); string sorting
/// reverse(s.begin(),s.end()); string reverse
/// int max_element = *max_element(a,a+n);[0 base index]
/// int min_element = *min_element(a,a+n);[0 base index]
/// int max_indx = max_element(a,a+n)-a;[0 base index]
/// int min_indx = min_element(a,a+n)-a;[0 base index]

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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int l[n];
        int zero = 0, same = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> l[i];
            if (l[i] == 0)
                zero++;
        }

        if (zero == n)
            cout << 0 << nl;
        else
        {
            sort(l, l + n);
            for (int i = 0; i < n - 1; i++)
            {
                if (l[i] != l[i + 1])
                    same++;
            }

            if (same == 1)
                cout << -1 << nl;
            else if (same == 2)
            {
                cout << l[0] << nl;
            }
            else
            {
                int sum = 0;
                for (int i = 0; i < n; i++)
                {
                    sum += l[i];
                }
                cout << sum / n << nl;
            }
        }
    }
    return 0;
}
