// #include <bits/stdc++.h>
// #define nl "\n"
// #define nn (cout << "NO\n")
// #define yy (cout << "YES\n")
// #define ss " "
// #define ll long long
// #define ull unsigned long long
// #define gcd(a, b) __gcd(a, b)
// #define lcm(a, b) ((a / gcd(a, b)) * b)
// #define pii pair<int, int>
// #define pll pair<long long, long long>
// #define sz(v) (int)v.size()
// #define mm(a, x) memset(a, x, sizeof(a))
// #define FIO                       \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// using namespace std;
// int main()
// {
//     FIO;
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;

//         int cnt = 0;
//         bool f = false;
//         for (int i = 1; i < s.size(); i++)
//         {
//             if (s[i] != s[0])
//                 f = true;

//             if (f)
//             {
//                 if (s[i] != s[i - 1])
//                     cnt++;
//             }
//         }

//         if (cnt % 2 == 0)
//         {
//             if (s[0] == s[s.size() - 1] && s.size() > 1 && s[0] == '0')
//                 cnt--;
//         }
//         else if (cnt % 2)
//         {
//             if (s[0] != s[s.size() - 1] && s.size() > 1 && s[0] == '0')
//                 cnt--;
//         }

//         /*
//         //chaile comment kora ei part tukuo deya jabe
//         if (s[s.size() - 1] == '0' && cnt % 2 == 0)
//         {
//             cnt--;
//         }
//         else if(s[s.size() - 1] == '1' && cnt % 2 != 0)
//         {
//             cnt--;
//         }
//         */
//         if (cnt < 0)
//         {
//             cnt = 0;
//         }
//         cout << cnt << nl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
#define   nl         "\n"
#define   NN         (cout << "NO\n")
#define   YY         (cout << "YES\n")
#define   nn         (cout << "No\n")
#define   yy         (cout << "Yes\n")
#define   ss         second
#define   ff         first
#define   all(v)     v.begin(),v.end()
#define   ll         long long int
#define   ull        unsigned long long
#define   gcd(a, b)  __gcd(a, b)
#define   lcm(a, b)  ((a/gcd(a,b)) * b)
#define   pb         push_back
#define   mp         make_pair
#define   pii        pair<int,int>
#define   pll        pair<long long,long long>
#define   vii        vector< int >
#define   vll        vector< ll >
#define   vpi        vector< pii >
#define   vpl        vector<pll>
#define   sz(v)      v.size()
#define   mm(a, x)   memset(a, x, sizeof(a))
#define   pi         acos(-1.0)
#define   ceil(a,b)  (a+b-1)/b
#define   jog(v)     accumulate(v.begin(), v.end(), 0)
#define   gun(v)     accumulate(v.begin(), v.end(), 1, multiplies<int>())
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
int main()
{
    FIO;
    ll t;
    cin>>t;
    while(t--)
    {                 //Main Logic: First 1 pawar por jokhon first time kono 
                      //zero ashbe tokhon theke shuru kore shesh porjonto joto 
                      //gula same number er segment thakbe toto gula operation kora lagbe.
        ll n,cnt=0;
        cin>>n;
        string s;
        cin>>s;
        bool f1=false,f2=false;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')f1=true;
            if(f1 && s[i]=='0')f2=true;

            if(f1 && f2)
            {
                if(s[i-1]!=s[i])cnt++;
            }
        }
        cout<<cnt<<nl;
    }
    
    return 0;
}

