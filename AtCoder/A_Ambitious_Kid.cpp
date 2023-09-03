#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mn = min(mn, abs(a[i]));
    }
    cout << mn << '\n';

    return 0;
}