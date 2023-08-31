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
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, q;
        cin >> n >> a >> q;
        string s;
        cin >> s;
        int p = 0, m = 0;
        for (int i = 0; i < sz(s); i++)
        {
            if (s[i] == '+')
                p++;
            else
                m++;
        }

        int ans = a;
        bool f = false;

        for (int i = 0; i < sz(s); i++)
        {
            if (s[i] == '+')
                ans++;
            else
                ans--;

            if (ans == n)
                f = true;
        }

        if (f || n == a)
            YY;
        else if (a + p >= n)
            cout << "MAYBE" << nl;
        else
            NN;
    }
    
    return 0;
}
