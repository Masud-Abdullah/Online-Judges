#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool f = true;
        while (n--)
        {
            int a, b, c, d;
            cin >> a >> b >> c >> d;
            if (b + c + d < a)
                f = false;
        }
        if (f)
            cout << "PASS\n";
        else
            cout << "FAIL\n";
    }
    return 0;
}