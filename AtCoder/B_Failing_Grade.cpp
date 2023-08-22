#include <bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{
    FIO;
    ll n, m, cnt = 0;
    cin >> n >> m;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < m)
            cnt++;
    }
    cout << cnt << nl;
    return 0;
}
