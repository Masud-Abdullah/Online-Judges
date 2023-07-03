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
int call(int n)
{
    return n*(n-1)/2;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,a,b;
        cin>>n>>k;
        bool f=false;

        for(int i=0;i<=n;i++)
        {
            if(call(i)+call(n-i)==k)
            {
                f=true;
                a=i;
                b=n-i;
                break;
            }
        }

        if(f)
        {
            yy;
            for(int i=1;i<=a;i++)cout<<1<<ss;

            for(int i=1;i<=b;i++)cout<<-1<<ss;

            cout<<nl;
        }
        else nn;

    }
    return 0;
}
// int main()
// {
//     FIO;
//     int t;
//     cin >> t;
//     while (t--)  //tutorial
//     {
//         int n,k,x=-1;
//         cin>>n>>k;
//         for(int i=0;i<=n;i++)
//         {
//             if(i*(i-1)/2+(n-i)*(n-i-1)/2==k)
//             {
//                 x=i;
//             }
//         }
//         if(x==-1)
//             nn;
//         else
//         {
//             yy;
//             for(int i=0;i<n;i++)
//             {
//                 if(i<x)
//                     cout<<1<<ss;
//                 else
//                     cout<<-1<<ss;
//             }
//             cout<<nl;
//         }
//     }

//     return 0;
// }
