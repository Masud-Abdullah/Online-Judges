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
        vector<int> a, b;
        int size = n * (n - 1) / 2;
        for (int i = 0; i < size; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
        }

        int indx = n;

        sort(b.begin(), b.end());

        for (int i = 0; i < size;)
        {
            a.push_back(b[i]);
            indx--;
            i += indx;
        }

        if (sz(a) != n)
        {
            while (sz(a) != n)
            {
                a.push_back(b[size - 1]);
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << nl;
    }
    return 0;
}
