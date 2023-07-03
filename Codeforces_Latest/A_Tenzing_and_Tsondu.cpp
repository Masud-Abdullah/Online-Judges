/*#include <bits/stdc++.h>
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
        ll n,m;
        cin>>n>>m;
        ll a[n];
        for(int i=0;i<n;i++)cin>>a[i];

        ll b[m];
        for(int i=0;i<m;i++)cin>>b[i];

        sort(a,a+n);
        sort(b,b+m,greater<int>());

        int i=0,j=0;
        while(i<n && j<m)
        {
            int x=(a[i]-b[j]);
            int y=(b[j]-a[i]);
            a[i]=x;
            b[j]=y;

            if(a[i]<=0)i++;

            if(b[j]<=0)j++;
        }

        if(a[n-1]>0 && b[m-1]<=0)cout<<"Tsondu"<<endl;
        else if(b[m-1]>0 && a[n-1]<=0)cout<<"Tenzing"<<endl;
        else cout<<"Draw"<<endl;
    }
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,m,s1=0;
        cin>>n>>m;
        long long a[n],b[m];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s1+=a[i];
        }

        for(int i=0;i<m;i++)
        {
            cin>>b[i];
            s1-=b[i];
        }

        if(s1==0)cout<<"Draw\n";
        else if(s1<0)cout<<"Tenzing\n";
        else cout<<"Tsondu\n";
    }
    return 0;
}