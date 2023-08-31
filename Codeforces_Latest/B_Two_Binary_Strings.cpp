#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        bool f = false;
        for (int i = 0; i < a.size() - 1; i++)
        {
            if (a[i] == b[i] && a[i] == '0' && a[i + 1] == b[i + 1] && a[i + 1] == '1')
            {
                f = true;
            }
        }
        if (f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
    return 0;
}