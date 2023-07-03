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
        int n, m, indx1, indx2;
        cin >> n >> m;
        int b[n * m + 5];
        for (int i = 1; i <= n * m; i++)
        {
            cin >> b[i];
        }

        sort(b + 1, b + n * m + 1);
        for (int i = 1; i <= n * m; i++)
        {
            if (b[i] > 0)
            {
                indx1 = i;
                indx2 = i + 1;
                break;
            }
        }
        int ans = 0,ans2=0;

        if (n < m)
            swap(n, m);
        ans += ((m-1)*n) * (b[n * m] - b[1]);
        ans += (n - 1) * (b[n * m] - b[2]);

        ans2 += ((m-1)*n) * (b[n * m] - b[indx1]);
        ans2 += (n - 1) * (b[n * m] - b[indx2]);
        // else
        // {
        //     ans= (n-1)*(b[n*m]-b[2]);
        //     ans+=(m-1)*m*(b[n*m]-b[1]);
        // }

        cout << max(ans,ans2) << nl;

        // for(int i=1;i<=n*m;i++)
        // {
        //     cout<<b[i]<<ss;
        // }
    }

    return 0;
}
