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
int main()
{
    FIO;
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x = 0;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < 0)
                x = 1;
        }

        ll cnt = 0, sum = 0,j;
        if (x == 0)
        {
            for (ll i = 0; i < n; i++)
                sum += a[i];

            cout << sum << " " << 0 << nl;
            continue;
        }

        for(int i=0;i<n;i++)
        {
            if(a[i]<0)
            {
                for(j=i;j<n;j++)
                {
                    if(a[j]>0 || j==n-1)
                    {
                        cnt++;
                        i=j;
                        break;
                    }
                }
                //if(i==n-1 && a[i]<=0)cnt++;
            }
        }

       //if(a[n-1]<0)cnt++;

        sum = 0;
        for (ll i = 0; i < n; i++)
        {
            sum += abs(a[i]);
        }

        cout << sum << " " << cnt << nl;
    }
    return 0;
}




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
// #define sz(v) v.size()
// #define mm(a, x) memset(a, x, sizeof(a))
// #define FIO                       \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// /// sort(a,a+n,greater<int>()); Descending sort
// /// sort(a,a+n); array sorting[0 base index]
// /// reverse(a,a+n); array reverse[0 base index]
// /// sort(s.begin(),s.end()); string sorting
// /// reverse(s.begin(),s.end()); string reverse
// /// int max_element = *max_element(a,a+n);[0 base index]
// /// int min_element = *min_element(a,a+n);[0 base index]
// /// int max_indx = max_element(a,a+n)-a;[0 base index]
// /// int min_indx = min_element(a,a+n)-a;[0 base index]
// /// isalpha(charracter) ei function int value return (0,1,2) kore.jodi >0 value return kore taile charracter ta alphabet ar naile alphabet na.
// /// isalpha() 1 return korle charracter ta capital ar 2 return korle charracter ta small.
// /// Substring_Check:
// /// str1(main string)
// /// str2(substring)
// /// if((str1.find(str2) != string :: npos))yy;
// /// else nn;

// /// int a[n];
// /// iota(a, a + n, 1);  >>>>>>>>>>>> eta diye n length er ekta array te 1-n porjonto value gulo sequentially set kora jay.
// using namespace std;
// int main()
// {
//     FIO;
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, x = 0;
//         cin >> n;
//         ll a[n];
//         for (ll i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             if (a[i] < 0)
//                 x = 1;
//         }

//         ll cnt = 0, sum = 0,j;

//         if (x == 0)
//         {
//             for (ll i = 0; i < n; i++)
//                 sum += a[i];

//             cout << sum << " " << 0 << nl;
//             continue;
//         }

//        bool f=false;
//        if(a[0]<0)f=true;
       
//        for(int i=0;i<n;i++)
//        {
//         if(f==true)
//         {
//             if(a[i]>0)
//             {
//                 f=false;
//                 cnt++;
//             }

//             if(a[i]<=0 && i==n-1)cnt++;
//         }
//         else if(f==false)
//         {
//             if(a[i]<0)
//             {
//                 f=true;
//             }

//             if(a[i]<0 && i==n-1)cnt++;
//         }
//        }

//         sum = 0;
//         for (ll i = 0; i < n; i++)
//         {
//             sum += abs(a[i]);
//         }
//        cout << sum << " " << cnt << nl;
//     }
//     return 0;
// }
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

    while (t--)
    {
        FIO;
        int n;
        cin >> n;
        int a[n];

        ll sum =0;     //Asif Abdullah

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += abs(a[i]);
        }

        int cnt=0;
        int mx = 0;

        for (int i = 0; i < n; i++)
        {
            if(a[i]<0)
            {
               // if(a[i]<0) cnt++;
               cnt++;
            }
            else if(a[i]>0)
            {
                if(cnt>0) mx++;
                cnt=0;
            }
        }

        if(cnt>0) mx++;

        cout << sum << " " << mx << endl;
        
         
    }
     
    return 0;
}
*/