#include <bits/stdc++.h>
#define nl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ss " "
#define ll long long
#define ull unsigned long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
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

/// Substring_Check:
/// str1(main string)
/// str2(substring)
/// if((str1.find(str2) != string :: npos))yy;
/// else nn;
using namespace std;
int main()
{
    FIO;
    int f1 = 0, f2 = 0;
    string s1;
    cin >> s1;
    char x = s1[0];
    char y = s1[1];

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        string s2;
        cin >> s2;
        if (s2 == s1)
        {
            cout << "YES" << nl;
            return 0;
        }

        if (s2[1] == x)
            f1++;

        if (s2[0] == y)
            f2++;
    }

    if (f1 > 0 && f2 > 0)
        yy;
    else
        nn;

    return 0;
}
// cout<<x<<ss<<y<<nl;
//  for(int i=1;i<=n;i++)
//  {
//      string s2;
//      cin>>s2;
//      s3+=s2;
//  }
//  s3+=s3;
//  s3+=s3;
//  cout<<s3<<nl;
//  if((s3.find(s1) != string :: npos))yy;
//  else nn;
