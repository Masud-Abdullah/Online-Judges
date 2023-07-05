#include <bits/stdc++.h>
using namespace std;
int a[101];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        a[x]++;
    }
    sort(a, a + 101, greater<int>());
    cout << a[0] << endl;

    return 0;
}