#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int x = a - b;
    int ans = 1;
    for (int i = 1; i <= x; i++)
        ans *= 32;

    cout << ans << '\n';

    return 0;
}