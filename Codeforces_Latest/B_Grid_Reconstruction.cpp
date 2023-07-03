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
        int a[2][n];
        a[0][0] = 2 * n;
        a[1][n - 1] = 2 * n - 1;
        int x = 1, y = 2;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0 && j == 0)
                    continue;
                else if (i == 1 && j == n - 1)
                    continue;

                if (i == 0 && j % 2 != 0)
                {
                    a[i][j] = y;
                    y += 2;
                }
                else if (i == 1 && j % 2 == 0)
                {
                    a[i][j] = x;
                    x += 2;
                }
            }
        }
        x = 2 * n - 3;
        y = 2 * n - 2;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0 && j == 0)
                    continue;
                else if (i == 1 && j == n - 1)
                    continue;

                if (i == 0 && j % 2 == 0)
                {
                    a[i][j] = y;
                    y -= 2;
                }
                else if (i == 1 && j % 2 != 0)
                {
                    a[i][j] = x;
                    x -= 2;
                }
            }
        }

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << nl;
        }
    }
    return 0;
}
