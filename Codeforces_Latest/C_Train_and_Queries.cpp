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
        ll n,k;cin>>n>>k;
        ll a[n];
        map<ll,pll>one;
        map<ll,pll>two;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(one[a[i]].first==0)
            {
                one[a[i]].first=i+1;
                one[a[i]].second=i+1;
            }
            else
            {
                one[a[i]].second=i+1;
            }
        }
        while(k--)
        {
            ll x,y;cin>>x>>y;
            if(one[x].first==0 || one[y].first==0)NN;
            else if(one[x].first<one[y].second)YY;
            else NN;
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
        int n; cin >> n;
        int k; cin >> k;

        map<int,multiset<int>> mp;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]].insert(i+1);
        }

        while (k--)
        {
           int l,r; cin >>l >> r;

           if(mp[r].size()==0 || mp[l].size()==0) nn;
           else if(*mp[r].rbegin()>= *mp[l].begin()) yy;
           else nn;
        }
        

      
        //  for(auto it = mp.begin(); it != mp.end(); it++){
        //     cout << it->first << " " << *it->second.begin() << " " << *it->second.begin() << endl;
        // }

        // for(auto it:mp)
        // {
        //     cout << it.first << " - ";
        //     for(auto val:it.second)
        //     {
        //         cout << val << " ";
        //     }

        //     cout << endl;
        // }

       
        

        

        
    }
     
    return 0;
}


*/