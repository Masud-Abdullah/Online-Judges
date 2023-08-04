#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case " << i << ": ";
        int x, y, z;
        cin >> x >> y >> z;
        if ((x * x) + (y * y) == z * z || (x * x) + (z * z) == y * y || (z * z) + (y * y) == x * x)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}