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
/// sort(a,a+n,greater<int>()); Descending sort
/// sort(a,a+n); array sorting[0 base index]
/// reverse(a,a+n); array reverse[0 base index]
/// sort(s.begin(),s.end()); string sorting
/// reverse(s.begin(),s.end()); string reverse
/// int max_element = *max_element(a,a+n);[0 base index]
/// int min_element = *min_element(a,a+n);[0 base index]
/// int max_indx = max_element(a,a+n)-a;[0 base index]
/// int min_indx = min_element(a,a+n)-a;[0 base index]
/// isalpha(charracter) ei function int value return (0,1,2) kore.jodi >0 value return kore taile charracter ta alphabet ar naile alphabet na.
/// isalpha() 1 return korle charracter ta capital ar 2 return korle charracter ta small.
/// Substring_Check:
/// str1(main string)
/// str2(substring)
/// if((str1.find(str2) != string :: npos))yy;
/// else nn;

/// int a[n];
/// iota(a, a + n, 1);  >>>>>>>>>>>> eta diye n length er ekta array te 1-n porjonto value gulo sequentially set kora jay.
using namespace std;
// bool palindrome(string s)
// {
//     int size = s.size();
//     bool f = true;
//     for (int i = 0, j = size - 1; i < j; i++, j--)
//     {
//         if (s[i] != s[j])
//         {
//             f = false;
//             break;
//         }
//     }
//     return f;
// }
int main()
{
    FIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int input = (2 * n) - 2;
        vector<string> str;
        int mx_sz = 0;
        while (input--)
        {
            string s;
            cin >> s;
            str.push_back(s);
            int tm_sz = sz(s);
            mx_sz = max(mx_sz, tm_sz);
        }

        if (mx_sz == 1)
        {
            if (str[0] == str[1])
                yy;
            else
                nn;
            continue;
        }

        vector<string> ans;
        for (int i = 0; i < sz(str); i++)
        {
            if (sz(str[i]) == mx_sz)
            {
                ans.push_back(str[i]);
            }
        }

        string a = ans[0];
        string b = ans[1];
        bool f = true;

        for (int i = 1; i < sz(a); i++)
        {
            if (a[i] != b[i - 1])
            {
                f = false;
                break;
            }
        }
        if (f == true)
        {
            string ans1 = a + b[mx_sz - 1];
            reverse(ans1.begin(), ans1.end());
            if (a + b[mx_sz - 1] == ans1)
                yy;
            else
                nn;
        }
        else if (f == false)
        {
            bool f2 = true;
            for (int i = 0; i < sz(b) - 1; i++)
            {
                if (a[i] != b[i + 1])
                {
                    f2 = false;
                    break;
                }
            }

            if (f2 == true)
            {
                string ans2 = b[0] + a;
                reverse(ans2.begin(), ans2.end());
                if (b[0] + a == ans2)
                    yy;
                else
                    nn;
            }
        }
    }
    return 0;
}
/*
#include <bits/stdc++.h>
#define endl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ll long long
#define ull unsigned long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define pii pair<int, int>
#define pll pair<long long, long long>
#define mm(a, x) memset(a, x, sizeof(a))
using namespace std;
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    FIO;
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int sz = n;
        n = (2*n)-2;
        vector<string> v;
        while (n--)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }

        vector<string> v1;
        for(string str:v)
        {
            if(str.size()==sz-1)
            {
                v1.push_back(str);
            }
        }

        string tmp1 = v1[0];  //Asif Abdullah
        string tmp2 = v1[1];

        reverse(tmp2.begin(),tmp2.end());

        if(tmp1 == tmp2) yy;
        else nn;

    }
     
    return 0;
}
*/

/*
  //else nn;

        //  if(a[0]==b[1])
        // {
        //     if(palindrome(b[0]+a)==true)
        //     {
        //         yy;
        //         continue;
        //     }
        // }

        // if(a[1]==b[0])
        // {
        //     if(palindrome(a[0]+b)==true)
        //     {
        //         yy;
        //         continue;
        //     }
        // }

        // if(a[mx_sz-2]==b[mx_sz-1])
        // {
        //     if(palindrome(b+a[mx_sz-2])==true)
        //     {
        //         yy;
        //         continue;;
        //     }
        // }
        // if(a[mx_sz-1]==b[mx_sz-2])
        // {
        //     if(palindrome(a+b[mx_sz-2])==true)
        //     {
        //         yy;
        //         continue;;
        //     }
        // }
        // nn;

        // string one=(a+b[mx_sz-1]);
        // string two=(b+a[mx_sz-1]);
        // string three=(a[0]+b);
        // string four=(b[0]+a);

        //    if(palindrome(one)==true)yy;
        //    else if(palindrome(two)==true)yy;
        //    else if(palindrome(three)==true)yy;
        //    else if(palindrome(four)==true)yy;
        //    else nn;

        // cout<<one<<" "<<two<<" "<<three<<" "<<four<<nl;
        // cout<<a<<" "<<b<<nl;

        // sort(str.begin(),str.end(),greater<string>());
        // for(int i=0;i<sz(str);i++)
        // {
        //     cout<<str[i]<<" ";
        // }
        // cout<<nl;
        // cout<<mx_sz<<nl;
*/