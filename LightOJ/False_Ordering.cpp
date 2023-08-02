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
pll cnt[1005];
bool cmp(pii a, pii b)
{
    if (a.first < b.first)
        return true;
    else if (a.first == b.first)
    {
        if (a.second > b.second)
            return true;
        else
            return false;
    }
    else
        return false;
}
void get_divisor()
{
    for (int i = 1; i <= 1000; i++)
    {
        cnt[i].second = i;
        for (int j = 1; j * j <= i; j++)
        {
            if (i % j == 0 && j * j == i)
                cnt[i].first++;
            else if (i % j == 0)
                cnt[i].first += 2;
        }
    }
    sort(cnt, cnt + 1001, cmp);
}
int main()
{
    FIO;
    ll t;
    cin >> t;
    get_divisor();
    for (int i = 1; i <= t; i++)
    {
        cout << "Case " << i << ": ";
        ll n;
        cin >> n;
        cout << cnt[n].second << nl;
    }
    return 0;
}
