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
    string a, b;
    cin >> a >> b;
    int cnt = 0;
    if (a == b)
        yy;
    else
    {
        for (int i = 0; i < sz(a); i++)
        {
            if (a[i] != b[i])
                cnt++;
        }
        if (cnt != 2)
            nn;
        else if (cnt == 2)
        {
            int ca[27] = {0}, cb[27] = {0};
            for (int i = 0; i < sz(a); i++)
            {
                ca[a[i] - 96]++;
                cb[b[i] - 96]++;
            }

            for (int i = 0; i <= 26; i++)
            {
                if (ca[i] != cb[i])
                {
                    nn;
                    return 0;
                }
            }
            for (int i = 0; i < sz(a) - 1; i++)
            {
                if (a[i] != b[i] && a[i + 1] != b[i + 1])
                {
                    yy;
                    return 0;
                }
            }
            nn;
        }
    }
    return 0;
}
