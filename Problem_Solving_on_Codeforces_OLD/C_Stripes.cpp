#include <bits/stdc++.h>
#define nl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ss " "
#define ll long long
#define ull unsigned long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define sz(v) v.size()
#define mm(a, x) memset(a, x, sizeof(a))
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
/// sort(a,a+n); array sorting[0 base index]
/// reverse(a,a+n); array reverse[0 base index]
/// sort(s.begin(),s.end()); string sorting
/// reverse(s.begin(),s.end()); string reverse
/// int max_element = *max_element(a,a+n);[0 base index]
/// int min_element = *min_element(a,a+n);[0 base index]
/// int max_indx = max_element(a,a+n)-a;[0 base index]
/// int min_indx = min_element(a,a+n)-a;[0 base index]
using namespace std;
int main()
{
    FIO;
    int t;
    cin >> t;
    while (t--)
    {
        int f = 0;
        string s1, s2, s3, s4, s5, s6, s7, s8;
        cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6 >> s7 >> s8;

        for (int i = 0; i < 8; i++)
        {
            if (s1[i] == 'R')
                f++;
        }

        if (f == 8)
        {
            cout << "R" << nl;
            continue;
        }

        f = 0;
        for (int i = 0; i < 8; i++)
        {
            if (s2[i] == 'R')
                f++;
        }
        if (f == 8)
        {
            cout << "R" << nl;
            continue;
        }

        f = 0;
        for (int i = 0; i < 8; i++)
        {
            if (s3[i] == 'R')
                f++;
        }
        if (f == 8)
        {
            cout << "R" << nl;
            continue;
        }

        f = 0;
        for (int i = 0; i < 8; i++)
        {
            if (s4[i] == 'R')
                f++;
        }
        if (f == 8)
        {
            cout << "R" << nl;
            continue;
        }

        f = 0;
        for (int i = 0; i < 8; i++)
        {
            if (s5[i] == 'R')
                f++;
        }
        if (f == 8)
        {
            cout << "R" << nl;
            continue;
        }

        f = 0;
        for (int i = 0; i < 8; i++)
        {
            if (s6[i] == 'R')
                f++;
        }
        if (f == 8)
        {
            cout << "R" << nl;
            continue;
        }

        f = 0;
        for (int i = 0; i < 8; i++)
        {
            if (s7[i] == 'R')
                f++;
        }
        if (f == 8)
        {
            cout << "R" << nl;
            continue;
        }

        f = 0;
        for (int i = 0; i < 8; i++)
        {
            if (s8[i] == 'R')
                f++;
        }
        if (f == 8)
        {
            cout << "R" << nl;
            continue;
        }

        cout<<"B"<<nl;

        // if (s1[0] == s2[0] && s2[0] == s3[0] && s3[0] == s4[0] && s4[0] == s5[0] && s5[0] == s6[0] && s6[0] == s7[0] && s7[0] == s8[0])
        // {
        //     if (s1[0] != '.')
        //     {
        //         cout << s1[0] << nl;
        //         continue;
        //     }
        // }

        // if (s1[1] == s2[1] && s2[1] == s3[1] && s3[1] == s4[1] && s4[1] == s5[1] && s5[1] == s6[1] && s6[1] == s7[1] && s7[1] == s8[1])
        // {
        //     if (s1[1] != '.')
        //     {
        //         cout << s1[1] << nl;
        //         continue;
        //     }
        // }

        // if (s1[2] == s2[2] && s2[2] == s3[2] && s3[2] == s4[2] && s4[2] == s5[2] && s5[2] == s6[2] && s6[2] == s7[2] && s7[2] == s8[2])
        // {
        //     if (s1[2] != '.')
        //     {
        //         cout << s1[2] << nl;
        //         continue;
        //     }
        // }
        // if (s1[3] == s2[3] && s2[3] == s3[3] && s3[3] == s4[3] && s4[3] == s5[3] && s5[3] == s6[3] && s6[3] == s7[3] && s7[3] == s8[3])
        // {
        //     if (s1[3] != '.')
        //     {
        //         cout << s1[3] << nl;
        //         continue;
        //     }
        // }
        // if (s1[4] == s2[4] && s2[4] == s3[4] && s3[4] == s4[4] && s4[4] == s5[4] && s5[4] == s6[4] && s6[4] == s7[4] && s7[4] == s8[4])
        // {
        //     if (s1[4] != '.')
        //     {
        //         cout << s1[4] << nl;
        //         continue;
        //     }
        // }
        // if (s1[5] == s2[5] && s2[5] == s3[5] && s3[5] == s4[5] && s4[5] == s5[5] && s5[5] == s6[5] && s6[5] == s7[5] && s7[5] == s8[5])
        // {
        //     if (s1[5] != '.')
        //     {
        //         cout << s1[5] << nl;
        //         continue;
        //     }
        // }
        // if (s1[6] == s2[6] && s2[6] == s3[6] && s3[6] == s4[6] && s4[6] == s5[6] && s5[6] == s6[6] && s6[6] == s7[6] && s7[6] == s8[6])
        // {
        //     if (s1[6] != '.')
        //     {
        //         cout << s1[6] << nl;
        //         continue;
        //     }
        // }
        // if (s1[7] == s2[7] && s2[7] == s3[7] && s3[7] == s4[7] && s4[7] == s5[7] && s5[7] == s6[7] && s6[7] == s7[7] && s7[7] == s8[7])
        // {
        //     if (s1[7] != '.')
        //     {
        //         cout << s1[7] << nl;
        //         continue;
        //     }
        // }
    }

    return 0;
}
