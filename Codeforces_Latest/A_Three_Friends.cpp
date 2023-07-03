#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        sort(a, a + 3);
        if (a[0] == a[1] && a[1] == a[2])
        {
            cout << 0 << endl;
        }
        else if (a[0] == a[1])
        {
            a[0]++;
            a[1]++;
            if (a[1] != a[2])
                a[2]--;
            cout << abs(a[0] - a[1]) + abs(a[0] - a[2]) + abs(a[1] - a[2]) << endl;
        }
        else if (a[1] == a[2])
        {
            a[1]--;
            a[2]--;
            if (a[0] != a[1])
                a[0]++;
            cout << abs(a[0] - a[1]) + abs(a[0] - a[2]) + abs(a[1] - a[2]) << endl;
        }
        else
        {
            a[0]++;
            a[2]--;
            if (a[0] != a[1] && a[2] != a[1])
                a[1]--;
            cout << abs(a[0] - a[1]) + abs(a[0] - a[2]) + abs(a[1] - a[2]) << endl;
        }

        // else if(a[0]==a[2])
        // {
        //     a[0]++;
        //     a[2]++;
        //     cout<<abs(a[0]-a[1])+abs(a[1]-a[2])<<endl;
        // }
        //  else if(a[1]==a[2])
        // {
        //     a[1]++;
        //     a[2]++;
        //     cout<<abs(a[0]-a[1])+abs(a[1]-a[2])<<endl;
        // }
    }

    return 0;
}