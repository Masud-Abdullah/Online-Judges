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
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll al = a[0], bb = 0, cnt = 1, trc = a[0];
        bool f = true;
        for (int i = 1, j = n - 1; i <= j;)
        {
            if (f)
            {
                f = false;
                ll indx = j, x = 0;
                while (x <= trc && i <= indx)
                {
                    // if (x >= trc || i > indx)
                    //     break;
                    x += a[indx];
                    indx--;
                }
                trc = x;
                bb += x;
                j = indx;
            }
            else
            {
                f = true;
                ll indx = i, x = 0;
                while (x <= trc && indx <= j)
                {
                    x += a[indx];
                    indx++;
                }
                trc = x;
                al += x;
                i = indx;
            }
            cnt++;
        }
        cout << cnt << " " << al << " " << bb << nl;
    }
    return 0;
}
