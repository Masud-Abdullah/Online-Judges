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
/// for converting string to integer: stoi(a); [a is the string ]
///int a[n];
///iota(a, a + n, 1);  >>>>>>>>>>>> eta diye n length er ekta array te 1-n porjonto value gulo sequentially set kora jay.
/// kadane algorithm for maximum subarray sum
/// __builtin_popcount(x) (__builtin_popcountll(x) for long long data type) ---->>> This function is used to count the number of one’s(set bits) in an integer.

/// __builtin_parity(x) (__builtin_parityll(x) for long long data type)   ---->>> This function is used to check the parity of a number.
///This function returns true(1) if the number has odd parity else it returns false(0) for even parity.
///parity means the number of one's of it's binary representaion is even or odd.

///__builtin_clz(x)  (__builtin_clzll(x) for long long data type)  ---->>> This function is used to count the leading zeros of the integer.

///__builtin_ctz(x)   (__builtin_ctzll(x) for long long data type)  ---->>> This function is used to count the trailing zeros of the integer.

using namespace std;
int main()
{
    FIO;
    ll t;cin>>t;
    while(t--)
    {
        ull n,m;cin>>n>>m;
        ull cnt=0;
        for(ull i=m;i<=10*m;i+=m)
        {
            //if(n%i!=0)continue;
            string s=to_string(i);
            ull x= (s[sz(s)-1]-'0');
            cnt+=x;
          // cout<<x<<nl;
        }
        if(m==1 && n!=1)cnt=45;
        else if(n==1 && m==1)cnt=1;
         ull y=n/(m*10);
         ull z=y*cnt;
   
       ull p=n%(m*10);
       ull q=0;
       for(ull i=m;i<=p;i+=m)
       {
            string s=to_string(i);
            ull x= (s[sz(s)-1]-'0');
            q+=x;
       }
       cout<<z+q<<nl;
    }
    return 0;
}

//Sayem er code
/*

#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             (cout << "YES\n")
#define      no              (cout << "NO\n")
#define      ll              long long
#define      pb              push_back
#define      pii             pair <int,int>
#define      pll             pair <long long,long long>
#define      rev(a)          reverse(a, a+n);
#define      Srev(s)         reverse(s.begin(), s.end());
#define      sz(s)           s.size()
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;

    int test;
    cin >> test;

    while(test--){
        ll n, m, i;
        cin >> n >> m;
        map<ll, bool> mp;
        vector<ll> v;
        i = 1;

        while(1){
            int val = (m*i)%10;
            if(!mp[val]){
                v.pb(val);
                mp[val] = true;
            }
            else{
                break;
            }
            i++;
        }

        // for(auto val: v){
        //     cout << val << " ";
        // }

        ll value = n/m;

        ll res = value/v.size();
        ll rem = value%v.size();

        ll sum = 0;

        for(i=0; i<v.size(); i++){
            sum += v[i];
        }

        ll ans = sum*res;
        
        for(i=0; i<rem; i++){
            ans += v[i];
        }

        cout << ans << endl;

        // cout << "Value: " << value << endl;
        // cout << "Res: " << res << endl;
        // cout << "Rem: " << rem << endl;
        // cout << "Temp Ans: " << ans << endl;
    }

    return 0;
}

*/