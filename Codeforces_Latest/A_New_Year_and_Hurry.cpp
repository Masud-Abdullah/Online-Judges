#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, cnt = 0, tm = 0, ans;
    cin >> n >> k;
    ans = 240 - k;
    for (int i = 1; i <= n; i++)
    {
        if (tm + (i * 5) <= ans)
        {
            tm = tm + (i * 5);
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}