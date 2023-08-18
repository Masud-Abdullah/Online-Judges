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
    string s;
    cin >> s;
    string hr, mnt;
    hr += s[0];
    hr += s[1];

    mnt += s[3];
    mnt += s[4];

    int x = stoi(hr);
    int y = stoi(mnt);

    if (hr == "00" || (hr == "01" && mnt[0] == '0'))
        cout << "01:10" << nl;
    else if (x == 1 || x == 2)
    {
        if (x == 1)
        {
            cout << "02:20" << nl;
            return 0;
        }
        if (y < 20)
            cout << "02:20" << nl;
        else
            cout << "03:30" << nl;
    }
    else if (x == 2 || x == 3)
    {
        if (x == 2)
        {
            cout << "03:30" << nl;
            return 0;
        }
        if (y < 30)
            cout << "03:30" << nl;
        else
            cout << "04:40" << nl;
    }
    else if (x == 3 || x == 4)
    {
        if (x == 3)
        {
            cout << "04:40" << nl;
            return 0;
        }
        if (y < 40)
            cout << "04:40" << nl;
        else
            cout << "05:50" << nl;
    }
    else if (x == 4 || x == 5)
    {
        if (x == 4)
        {
            cout << "05:50" << nl;
            return 0;
        }
        if (y < 50)
            cout << "05:50" << nl;
        else
            cout << "10:01" << nl;
    }
    else if (x <= 10)
    {
        if (x < 10)
        {
            cout << "10:01" << nl;
            return 0;
        }
        if (y < 01)
            cout << "10:01" << nl;
        else
            cout << "11:11" << nl;
    }
    else if (x == 10 || x == 11)
    {
        if (x == 10)
        {
            cout << "11:11" << nl;
            return 0;
        }
        if (y < 11)
            cout << "11:11" << nl;
        else
            cout << "12:21" << nl;
    }
    else if (x == 11 || x == 12)
    {
        if (x == 11)
        {
            cout << "12:21" << nl;
            return 0;
        }
        if (y < 21)
            cout << "12:21" << nl;
        else
            cout << "13:31" << nl;
    }
    else if (x == 12 || x == 13)
    {
        if (x == 12)
        {
            cout << "13:31" << nl;
            return 0;
        }
        if (y < 31)
            cout << "13:31" << nl;
        else
            cout << "14:41" << nl;
    }
    else if (x == 13 || x == 14)
    {
        if (x == 13)
        {
            cout << "14:41" << nl;
            return 0;
        }
        if (y < 41)
            cout << "14:41" << nl;
        else
            cout << "15:51" << nl;
    }
    else if (x == 14 || x == 15)
    {
        if (x == 14)
        {
            cout << "15:51" << nl;
            return 0;
        }
        if (y < 51)
            cout << "15:51" << nl;
        else
            cout << "20:02" << nl;
    }
    else if (x < 20)
        cout << "20:02" << nl;
    else if (x == 20 || x == 21)
    {
        if (x == 20 && y < 2)
        {
            cout << "21:12" << nl;
            return 0;
        }
        if (y < 12)
            cout << "21:12" << nl;
        else
            cout << "22:22" << nl;
    }
    else if (x == 22)
    {
        if (y < 22)
            cout << "22:22" << nl;
        else
            cout << "23:32" << nl;
    }
    else if (x = 23)
    {
        if (y < 32)
            cout << "23:32" << nl;
        else
            cout << "00:00" << nl;
    }

    return 0;
}
