#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, d, p;
    cin >> n >> d >> p;
    vector<ll> f(n);
    for (int i = 0; i < n; i++)
        cin >> f[i];

    ll daily = p / d, ans = 0;
    double mod = p % d;
    mod /= d;

    vector<ll> ext;
    for (auto it : f)
    {
        if (it > daily)
            ext.push_back(it);
        else
            ans += it;
    }
    // cout<<ans<<endl;

    sort(ext.begin(), ext.end());

    ll take = ext.size() / d;
    ll noNeed = take % d;

    ans += (daily * (ext.size() - noNeed)) + (mod * (ext.size() - noNeed));

    ll cnt = 0;

    for (int i = 0; i < noNeed; i++)
    {
        cnt += ext[i];
    }

    if (cnt < p)
        ans += cnt;
    else
        ans += p;

    cout << ans << endl;
    return 0;
}