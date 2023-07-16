#include <bits/stdc++.h>
#define nl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ss " "
#define ll long long
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
        ll n, m, k;
        cin >> n >> m >> k;
        ll x, y;
        cin >> x >> y;
        bool ff = true;
        while (k--)
        {
            int a, b;
            cin >> a >> b;
            int e = abs(x - a);
            int f = abs(y - b);
            // if ((e + f) % 2 == 0)
            if (((x + y) % 2 && (a + b) % 2) || ((x + y) % 2 == 0 && (a + b) % 2 == 0))
            {
                ff = false;
            }
        }
        if (ff)
            yy;
        else
            nn;
    }
    return 0;
}
