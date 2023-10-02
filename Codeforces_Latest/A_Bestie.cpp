#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n+1];

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        int gc = a[1];
        for (int i = 1; i <= n; i++)
        {
            gc = __gcd(gc, a[i]);
        }

        if (gc == 1)
        {
            cout << 0 << '\n';
            continue;
        }

        int it = n, cost = 0;
        
        cout << cost << endl;

    }
    return 0;
}

/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 5];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int gc = a[1];
        for (int i = 1; i <= n; i++) // tutorial
            gc = __gcd(gc, a[i]);

        if (gc == 1)
            cout << 0 << endl;
        else if (__gcd(gc, n) == 1)
            cout << 1 << endl;
        else if (__gcd(gc, n - 1) == 1)
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }
    return 0;
}
*/
