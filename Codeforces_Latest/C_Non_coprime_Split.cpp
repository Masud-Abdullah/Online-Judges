#include <bits/stdc++.h>
#define nl "\n"
#define NN (cout << "NO\n")
#define YY (cout << "YES\n")
#define nn (cout << "No\n")
#define yy (cout << "Yes\n")
#define ss second
#define ff first
#define all(v) v.begin(), v.end()
#define ll long long int
#define ull unsigned long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vii vector<int>
#define vll vector<ll>
#define vpi vector<pii>
#define vpl vector<pll>
#define sz(v) v.size()
#define mm(a, x) memset(a, x, sizeof(a))
#define pi acos(-1.0)
#define ceil(a, b) (a + b - 1) / b
#define jog(v) accumulate(v.begin(), v.end(), 0)
#define gun(v) accumulate(v.begin(), v.end(), 1, multiplies<int>())
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
        ll a, b;
        cin >> a >> b;
        if (b <= 3)
            cout << -1 << nl;
        else
        {
            if (b % 2 == 0)cout << b / 2 << " " << b / 2 << nl;
            else if (b % 2 && a != b)cout << (b - 1) / 2 << " " << (b - 1) / 2 << nl;
            else if (a == b && a % 2 == 0)cout << (b - 1) / 2 << " " << (b - 1) / 2 << nl;
            else if (a == b && a % 2)
            {
                ll x = 2, y = a - 2;
                bool f = false;
                while (x != a || y != 1)
                {
                    // if(x==a || y==1)break;

                    if (__gcd(x, y) != 1)
                    {
                        cout << x << " " << y << nl;
                        f = true;
                        break;
                    }
                    x++;
                    y--;
                }
                if (!f)
                    cout << -1 << nl;
            }
            else
                cout << -1 << nl;
        }
    }
    return 0;
}
