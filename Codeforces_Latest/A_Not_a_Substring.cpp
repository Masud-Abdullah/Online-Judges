#include <bits/stdc++.h>
#define nl "\n"
#define NN (cout << "NO\n")
#define YY (cout << "YES\n")
#define ll long long int
#define sz(v) v.size()
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
        string s;
        cin >> s;
        int f = 0;

        if (s == "()")
        {
            NN;
            continue;
        }

        string tmp = "";
        for (int i = 1; i <= 2 * sz(s); i++)
        {
            if (i % 2 == 1)
                tmp += '(';
            else
                tmp += ')';
        }

        if (!(tmp.find(s) != string ::npos))
        {
            YY;
            cout << tmp;
        }
        else
        {
            YY;
            for (int i = 1; i <= sz(s) * 2; i++)
            {
                if (i <= sz(s) * 2 / 2)
                    cout << '(';
                else
                    cout << ')';
            }
        }
        cout << nl;
    }

    return 0;
}