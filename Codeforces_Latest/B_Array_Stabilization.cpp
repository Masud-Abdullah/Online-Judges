#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    cout << min(a[n - 1] - a[1], a[n - 2] - a[0]) << '\n';
    return 0;
}