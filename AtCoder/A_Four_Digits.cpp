#include <bits/stdc++.h>
#define nl "\n"
#define sz(v) v.size()
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{
    FIO;
    string s;
    cin >> s;
    if (sz(s) == 4)
        cout << s << nl;
    else
    {
        for (int i = 1; i <= 4 - sz(s); i++)
            cout << 0;

        cout << s << nl;
    }
    return 0;
}
