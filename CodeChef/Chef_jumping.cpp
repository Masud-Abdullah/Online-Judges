#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    n %= 6;
    if (n == 1 || n == 3 || n == 0)
        cout << "yes\n";
    else
        cout << "no\n";
    return 0;
}