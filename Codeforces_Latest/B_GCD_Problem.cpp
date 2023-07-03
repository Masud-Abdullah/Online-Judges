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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a,b;
        if((n-1)%2==0)a=((n-1)/2)+1;
        else a=(n-1)/2;
        if(n%2!=0)b=((n-1)-(n-1)/2)-1;
        else b=(n-1)-(n-1)/2;
        if(a+b+1==n && gcd(a,b)==1)cout<<a<<" "<<b<<" "<<1<<nl;
        else 
        {
            a+=1;
            b-=1;
            if(a+b+1==n && gcd(a,b)==1)cout<<a<<" "<<b<<" "<<1<<nl;
           // else cout<<"no"<<a+1<<" "<<b-1<<" "<<1<<nl;
        }
        //cout<<"no"<<nl;
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
    int t; cin >> t;

    while (t--)
    {
        int n,m;
        cin >> n;   

        if (n % 2 == 0)
            cout << n - 3 << " " << 2 << " "<< 1 << endl;
        else
        {
            n = n-1;   //code of this else part is explained by muhammad_sayem
            m = n/2;

            if(m%2==0) cout << m+1 << " " << m-1 << " " << 1 << endl;
            else cout << m+2 << " " << m-2 << " " << 1 << endl; 
        }
    }

    return 0;
}

*/

