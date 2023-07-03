#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        if (a[0] < 0)
            cout << a[0] << endl;
        else
            cout << a[n - 1] << endl;
    }
    return 0;
}
/*
//sort(a,a+n);
            // cout<<a[0]<<endl;
        //  bool f = false;

        // for(int i=0;i<n-1;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {

        //     }
        // }

        // for (int i = 0; i < n - 1; i++)
        // {
        //     for (int j = i + 1; j < n; j++)
        //     {
        //             x = abs(a[i] - a[j]);

        //         for (int k = 0; k < n; k++)
        //         {
        //             if (k != i && k != j && x == a[k])
        //             {
        //                 x = a[i];
        //                 f = true;
        //                 break;
        //             }
        //         }
        //         if (f == true)
        //             break;
        //     }
        //     if (f == true)
        //         break;
        // }

*/