#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d, m;
        cin >> d >> m;
        int a[m];
        vector<int> ans;
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
            for (int j = 1; j <= a[i]; j++)
            {
                ans.push_back(j);
            }
        }

        int trc = 1, cnt = 0;
        for (int i = 0; i < ans.size(); i++)
        {
            trc++;
            if (trc == 7)
            {
                trc = 0;
                if (ans[i] == 13)
                    cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}