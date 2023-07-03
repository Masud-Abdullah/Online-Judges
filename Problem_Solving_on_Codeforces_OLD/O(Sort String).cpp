#include<iostream>
using namespace std;
int main()
{
    int n, i, j; // 12
    cin >> n;
    int a[26]; // 4*26=124

    for (i = 0; i < 26; i++)
    {
        a[i] = 0;
    }

    char ch; // 1 byte
    for (i = 0; i < n; i++)
    {

        cin >> ch;
        a[ch - 97]++;
    }

    for (i = 0; i < 26; i++)
    {
        for (j = 0; j < a[i]; j++)
        {
            cout << (char)(i + 97);
        }
    }

    return 0;
}
