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
        if (x == y && z != 1)
            cout << "No\n";
        else
            cout << "Yes\n";
    }
    return 0;
}