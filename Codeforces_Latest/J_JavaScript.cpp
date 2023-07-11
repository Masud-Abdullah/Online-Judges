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
    string a, b;
    cin >> a >> b;
    bool f1 = true, f2 = true;
    for (int i = 0; i < sz(a); i++)
    {
        if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
        {
            f1 = false;
            break;
        }
    }

    for (int i = 0; i < sz(b); i++)
    {
        if ((b[i] >= 'a' && b[i] <= 'z') || (b[i] >= 'A' && b[i] <= 'Z'))
        {
            f2 = false;
            break;
        }
    }

    if (f1 && f2)
    {
        int ans1, ans2;
        ans1 = stoi(a);
        ans2 = stoi(b);
        cout << ans1 - ans2 << nl;
    }
    else
        cout << "NaN\n";
    return 0;
}