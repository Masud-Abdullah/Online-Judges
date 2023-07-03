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
#define   sz(v)      v.size()
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
/// isalpha(charracter) ei function int return value(0,1,2) kore.jodi >0 value return kore taile charracter ta alphabet ar naile alphabet na.
///Substring_Check:
///str1(main string)
///str2(substring)
///if((str1.find(str2) != string :: npos))yy;
///else nn;

///int a[n];
///iota(a, a + n, 1);  >>>>>>>>>>>> eta diye n length er ekta array te 1-n porjonto value gulo sequentially set kora jay.
/*#include<bits/stdc++.h>
#define  nl         "\n"
#define  ll     long long
using namespace std;
int main()
{
    ll t;
     cin >> t;
     ll limit = 1e6;//10^12 er sqr root
     ll seive[limit+5] = {0};    // memset(seive,0,sizeof(seive));

     for(ll i=2;i<=limit;i++)
     {
        if(seive[i]==0)
        {
            for(ll j=i+i;j<=limit;j+=i)
            {
                seive[j]=1;
            }
        }
     }

     while(t--)
     {
         ll n;
         cin >> n;
         ll value1 = sqrt(n);


         if(n<4) cout << "NO"<<nl;
         else if(seive[value1]==0 && value1*value1==n) cout << "YES"<<nl;
         else cout << "NO"<<nl;
     }

    return 0;
}*/
using namespace std;
int main()
{
    FIO;


    return 0;
}

