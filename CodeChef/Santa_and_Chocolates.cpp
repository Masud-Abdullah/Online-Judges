#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        long long int a[n], sm = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sm += a[i];
        }
        if (sm < n)
            cout << "NO\n";
        else if (k == 0 && sm % n != 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}