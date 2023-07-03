#include <bits/stdc++.h>
#define nl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ss " "
#define ll long long
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{
    FIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, i, j, x, y;
        cin >> n >> k;
        int a[n][n];
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        int b[n][n];

        for (i = n - 1, x = 0; i >= 0; i--, x++)
        {
            for (j = n - 1, y = 0; j >= 0; j--, y++)
            {
                b[x][y] = a[i][j];
            }
        }

        int cnt = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (a[i][j] != b[i][j])
                    cnt++;
            }
        }

        cnt /= 2;
        if (cnt > k)
            nn;
        else
        {
            int tm = k - cnt;
            if (n % 2 == 0 && tm % 2 != 0)
                nn; // n er value odd hole grid er ekdom centre er value ta unchanged thakbe.Jehetu eta square matrix tai etake jotoi rotate kori na ken n odd hole centre er cell never change.That's why we write this thing which is (n%2==0).
            else
                yy;
        }
    }
    return 0;
}
