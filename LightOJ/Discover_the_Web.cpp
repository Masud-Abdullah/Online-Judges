#include <bits/stdc++.h>
#define   nl         "\n"
#define   nn         (cout << "NO\n")
#define   yy         (cout << "YES\n")
#define   ss         " "
#define   ll         long long
#define   ull        unsigned long long
#define   gcd(a, b)  __gcd(a, b)
#define   lcm(a, b)  ((a/gcd(a,b)) * b)
#define   pii        pair<int,int>
#define   pll        pair<long long,long long>
#define   sz(v)      (int)v.size()
#define   mm(a, x)   memset(a, x, sizeof(a))
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
/// sort(a,a+n,greater<int>()); Descending sort
///sort(a,a+n); array sorting[0 base index]
///reverse(a,a+n); array reverse[0 base index]
///sort(s.begin(),s.end()); string sorting
///reverse(s.begin(),s.end()); string reverse
///int max_element = *max_element(a,a+n);[0 base index]
///int min_element = *min_element(a,a+n);[0 base index]
///int max_indx = max_element(a,a+n)-a;[0 base index]
///int min_indx = min_element(a,a+n)-a;[0 base index]
/// isalpha(charracter) ei function int value return (0,1,2) kore.jodi >0 value return kore taile charracter ta alphabet ar naile alphabet na.
///isalpha() 1 return korle charracter ta capital ar 2 return korle charracter ta small.
///Substring_Check:
///str1(main string)
///str2(substring)
///if((str1.find(str2) != string :: npos))yy;
///else nn;

///int a[n];
///iota(a, a + n, 1);  >>>>>>>>>>>> eta diye n length er ekta array te 1-n porjonto value gulo sequentially set kora jay.
using namespace std;
int main()
{
    FIO;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
         cout << "Case " << i << ":" << endl;
         string tmp,cur="http://www.lightoj.com/";
         stack<string>f,b;

         while(cin>>tmp && tmp!="QUIT")
         {
            if(tmp=="VISIT")
            {
                b.push(cur);
                while(!f.empty())f.pop();

                cin>>cur;

                cout<<cur<<endl;
            }
            else if(tmp=="BACK")
            {
                if(b.size())
                {
                    f.push(cur);
                    cur=b.top();
                    b.pop();
                    cout<<cur<<endl;
                }
                else cout<<"Ignored"<<endl;
            }
            else if(tmp=="FORWARD")
            {
                if(f.size())
                {
                    b.push(cur);
                    cur=f.top();
                    f.pop();
                    cout<<cur<<endl;
                }
                else cout<<"Ignored"<<endl;
            }
         }
    }
    return 0;
}



// #include <bits/stdc++.h>
// #define nl "\n"
// #define nn (cout << "NO\n")
// #define yy (cout << "YES\n")
// #define ss " "
// #define ll long long
// #define sz(v) v.size()
// #define mm(a, x) memset(a, x, sizeof(a))
// #define FIO                       \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// using namespace std;
// int main()
// {
//     FIO;
//     int t;
//     cin >> t;
//     for (int i = 1; i <= t; i++)
//     {
//         cout << "Case " << i << ":" << endl;
//         int indx = 0;
//         cin.ignore();
//         vector<string> st;
//         st.push_back("VISIT http://www.lightoj.com/");
//         while (true)
//         {
//             string s;
//             getline(cin, s);

//             if (s == "QUIT")
//                 break;

//             if (s[0] == 'V')
//             {
//                 st.insert(st.begin() + indx + 1, s);
//                 indx++;
//                 // string tm;
//                 // tm+=st[indx];
//                 for (int j = 6; j < sz(s); j++)
//                 {
//                     cout << s[j];
//                 }
//                 cout << nl;
//             }
//             else if (s == "BACK")
//             {
//                 if (indx == 0 || sz(st) == 1)
//                     cout << "Ignored" << nl;
//                 else
//                 {
//                     indx--;
//                     // cout << st[indx] << nl;
//                     string tm;
//                     tm += st[indx];
//                     for (int j = 6; j < sz(tm); j++)
//                     {
//                         cout << tm[j];
//                     }
//                     cout << nl;
//                 }
//             }
//             else if (s == "FORWARD")
//             {
//                 if (indx == sz(st) - 2 || sz(st) == 1)
//                 {
//                     cout << "Ignored" << nl;
//                 }
//                 else
//                 {
//                     indx++;
//                     // cout << st[indx] << nl;
//                     string tm;
//                     tm += st[indx];
//                     for (int j = 6; j < sz(tm); j++)
//                     {
//                         cout << tm[j];
//                     }
//                     cout << nl;
//                 }
//             }
//         }
//     }
//     return 0;
// }
// /*
//             // st.push_back("http://uva.onlinejudge.org/");
//             // st.push_back("http://topcoder.com/");
//             // st.push_back("http://acm.sgu.ru/");
//             // for(int i=0;i<st.size();i++)
//             // {
//             //     cout<<st[i]<<nl;
//             // }
//             // break;
// */