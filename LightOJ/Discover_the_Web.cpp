#include <bits/stdc++.h>
#define nl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ss " "
#define ll long long
#define sz(v) v.size()
#define mm(a, x) memset(a, x, sizeof(a))
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{
    FIO;
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case " << i << ":" << endl;
        int indx = 0;
        cin.ignore();
        vector<string> st;
        st.push_back("VISIT http://www.lightoj.com/");
        while (true)
        {
            string s;
            getline(cin, s);

            if (s == "QUIT")
                break;

            if (s[0] == 'V')
            {
                st.insert(st.begin() + indx + 1, s);
                indx++;
                // string tm;
                // tm+=st[indx];
                for (int j = 6; j < sz(s); j++)
                {
                    cout << s[j];
                }
                cout << nl;
            }
            else if (s == "BACK")
            {
                if (indx == 0 || sz(st) == 1)
                    cout << "Ignored" << nl;
                else
                {
                    indx--;
                    // cout << st[indx] << nl;
                    string tm;
                    tm += st[indx];
                    for (int j = 6; j < sz(tm); j++)
                    {
                        cout << tm[j];
                    }
                    cout << nl;
                }
            }
            else if (s == "FORWARD")
            {
                if (indx == sz(st) - 2 || sz(st) == 1)
                {
                    cout << "Ignored" << nl;
                }
                else
                {
                    indx++;
                    // cout << st[indx] << nl;
                    string tm;
                    tm += st[indx];
                    for (int j = 6; j < sz(tm); j++)
                    {
                        cout << tm[j];
                    }
                    cout << nl;
                }
            }
        }
    }
    return 0;
}
/*
            // st.push_back("http://uva.onlinejudge.org/");
            // st.push_back("http://topcoder.com/");
            // st.push_back("http://acm.sgu.ru/");
            // for(int i=0;i<st.size();i++)
            // {
            //     cout<<st[i]<<nl;
            // }
            // break;
*/