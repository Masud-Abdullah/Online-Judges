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
        ll n,x;
        cin>>n>>x;
        ll a[n],b[n],c[n];
        for(int i=0;i<n;i++)cin>>a[i];

        for(int i=0;i<n;i++)cin>>b[i];

        for(int i=0;i<n;i++)cin>>c[i];

        ll ans=0;

        int i=0,j=0,k=0;
        // cout<<"tamim\n";
        // continue;
        while(ans<x)
        {
            int f=0;
            //cout<<"Tamim\n";
            if((ans^a[i])<=x && i<n)
            {
                ans=(ans^a[i]);
                i++;
                f++;
            }
            else if((ans^b[j])<=x && j<n)
            {
                ans=(ans^b[j]);
                j++;
                f++;
            }
            else if((ans^c[k])<=x && k<n)
            {
                ans=(ans^c[k]);
                k++; 
                f++;
            }
            if(f==0)break;
            f=0;
           // if(i>n && j>n && k>n)break;
           // if(ans>=x)break;
        }
        // cout<<"tamim\n";
        // continue;
        if(ans>=x)cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}

//     int a,b;
    // cin>>a>>b;
    // cout<<(a^b)<<endl;
    // for(int i=0;i<=10;i++){
    //     for(int j=0;j<=10;j++)
    //     {
    //         cout<<i<<" ^ "<<j<<" = "<<(i^j)<<endl;
    //     }
    // }