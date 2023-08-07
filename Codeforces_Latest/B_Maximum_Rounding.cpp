#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string x;
        cin >> x;

        int n = x.size();
        int k = n - 1;
        while (k >= 0 && x[k] == '9')
            k--;

        if (k == -1) {
            cout << "1";
            for (int i = 0; i < n; i++)
                cout << "0";
            cout << endl;
        } else {
            for (int i = 0; i <= k; i++)
                cout << x[i];
            cout << endl;
        }
    }

    return 0;
}
