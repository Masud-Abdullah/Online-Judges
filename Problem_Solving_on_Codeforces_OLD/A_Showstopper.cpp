#include <bits/stdc++.h>
#define   nl         "\n"
#define   nn         (cout << "NO\n")
#define   yy         (cout << "YES\n")
#define   ss         " "
#define   ll         long long
#define   ull        unsigned long long
#define   pi         pair<int, int>
#define   rv(v)      v.begin(), v.end()
#define   sz(v)      v.size()
#define   mm(a, x)   memset(a, x, sizeof(a))
#define   FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{
    FIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n, f = 0;
        cin >> n;
        int a[n], b[n];

        for (int i = 0; i < n; i++)cin >> a[i];

        for (int i = 0; i < n; i++)cin >> b[i];

        for (int i = 0; i < n; i++)
        {
            if (a[i] > a[n - 1] || b[i] > b[n - 1])
            {
                swap(a[i], b[i]);
                if (a[i] > a[n - 1] || b[i] > b[n - 1])
                {
                    f = -1;
                    break;
                }
            }
        }

        cout << (f == 0 ? "YES" : "NO") << nl;
    }
    return 0;
}
