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
bool isPalindrome(string ans)
{
    for (int i = 0, j = sz(ans) - 1; i < j; i++, j--)
    {
        if (ans[i] != ans[j])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    FIO;
    string s, ans = "";
    cin >> s;

    if (isPalindrome(s))
    {
        yy;
        return 0;
    }

    int cntf = 0, cnts = 0;

    for (int i = 0; i < sz(s); i++)
    {
        if (s[i] != 'a')
            break;
        if (s[i] == 'a')
            cntf++;
    }

    for (int i = sz(s) - 1; i >= 0; i--)
    {
        if (s[i] != 'a')
            break;
        if (s[i] == 'a')
            cnts++;
    }

    if (cntf >= cnts)
    {
        nn;
        return 0;
    }

    int var = cnts - cntf;
    for (int i = 1; i <= var; i++)
    {
        ans += 'a';
    }

    ans += s;

    if (isPalindrome(ans))
        yy;
    else
        nn;

    return 0;
}
