#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, f = 0;
        cin >> n;
        string s;
        cin >> s;
        char tm=s[0];

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(s[j]==s[i])
                {
                    cout<<s[i];
                    i=j;
                    break;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}







// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, f = 0;
//         cin >> n;
//         string s;
//         cin >> s;
//         string ans;
//         ans += s[0];
//         char c = s[0];

//         for (int i = 1; i < n; i++)
//         {
//             if (s[i] == c)
//             {
//                 if (f == 1)
//                     f = 0;
//                 else if (f == 0)
//                 {
//                     if (i != n - 1)
//                     {
//                         c = s[i + 1];
//                         ans += s[i + 1];
//                         f = 1;
//                     }
//                 }
//             }
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }