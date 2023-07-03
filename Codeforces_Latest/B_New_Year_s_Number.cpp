#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
 
    while(test--){
        int n;
        cin >> n;
 
        int res = n/2020;
        int rem = n%2020;
 
        if(rem <= res) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
 
    return 0;
}

//camp a live contest er code
// #include <bits/stdc++.h>
// #define   nl         "\n"
// #define   nn         (cout << "NO\n")
// #define   yy         (cout << "YES\n")
// #define   ss         " "
// #define   ll         long long
// #define   ull        unsigned long long
// #define   gcd(a, b)  __gcd(a, b)
// #define   lcm(a, b)  ((a/gcd(a,b)) * b)
// #define   pii        pair<int,int>
// #define   pll        pair<long long,long long>
// #define   sz(v)      v.size()
// #define   mm(a, x)   memset(a, x, sizeof(a))
// #define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


// using namespace std;
// int main()
// {
//     FIO;
//     int t;
//     cin >> t;

//     while(t--)
//     {
//         int n,cnt=0,f=0;
//         cin >> n;

//         if(n<2020) nn;
//         else if(n==2020 || n==2021) yy;
//         else if(n%2021==0 || n%2020==0) yy;
//         else{
//             while(n>=2020)
//             {
//                 cnt++;
//                 n=n-2020;
//                 if(n==2020 || n==2021)f=1;
//             }
//             if(f==1)yy;
//             else if(n<=cnt)yy;
//             else nn;
//             /*
//             if(n<2020) nn;
//             else yy;*/
//         }

//     }

//     return 0;
// }

//ager code
/*
#include<bits/stdc++.h>
#define  nl         "\n"
#define  ll     long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        while(1)
        {
            if(n%2020==0 || n%2021==0)
            {
                cout<<"YES"<<nl;
                break;
            }
            else
            {
                n-=2021;
                if(n<0)
                {
                    cout<<"NO"<<nl;
                    break;
                }
                else if(n%2020==0 || n==0)
                {
                    cout<<"YES"<<nl;
                    break;
                }
            }
        }
    }

    return 0;
}

 
*/