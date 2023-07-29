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
        int n;
        cin >> n;
        string s;
        cin >> s;

        int cnt = 0;
        bool f = false;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] != s[0])
                f = true;

            if (f)
            {
                if (s[i] != s[i - 1])
                    cnt++;
            }
        }

        if (cnt % 2 == 0)
        {
            if (s[0] == s[s.size() - 1] && s.size() > 1 && s[0] == '0')
                cnt--;
        }
        else if (cnt % 2)
        {
            if (s[0] != s[s.size() - 1] && s.size() > 1 && s[0] == '0')
                cnt--;
        }

        /*
        //chaile comment kora ei part tukuo deya jabe
        if (s[s.size() - 1] == '0' && cnt % 2 == 0)
        {
            cnt--;
        }
        else if(s[s.size() - 1] == '1' && cnt % 2 != 0)
        {
            cnt--;
        }
        */
        if (cnt < 0)
        {
            cnt = 0;
        }
        cout << cnt << nl;
    }
    return 0;
}
