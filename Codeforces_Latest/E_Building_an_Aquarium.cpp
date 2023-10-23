#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll N = 1e6 + 5;
ll a[N], n, x;
bool search(ll mid)
{
    ll sm = 0;
    for (ll i = 0; i < n; i++)
    {
        if(mid>a[i])sm += mid-a[i];
        if (sm > x)
            return false;
    }
    return true;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        ll lo = 0, hi = 1e18, ans = 0, mid;
        while (lo <= hi)
        {
            mid = (lo + hi) / 2;
            if (search(mid))
            {
                lo = mid + 1;
                ans = mid;
            }
            else
            {
                hi = mid - 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}