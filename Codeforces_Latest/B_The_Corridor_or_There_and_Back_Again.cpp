#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<pair<long long, long long>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first >> v[i].second;
        }

        long long mn = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            long long x = v[i].first;
            long long y = v[i].second;

            long long ans = x + ((y + 1) / 2) - 1;
            mn = min(mn, ans);
        }
        cout << mn << endl;
    }
    return 0;
}