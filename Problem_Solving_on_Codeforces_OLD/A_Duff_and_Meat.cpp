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
///sort(a,a+n); array sorting[0 base index]
///reverse(a,a+n); array reverse[0 base index]
///sort(s.begin(),s.end()); string sorting
///reverse(s.begin(),s.end()); string reverse
///int max_element = *max_element(a,a+n);[0 base index]
///int min_element = *min_element(a,a+n);[0 base index]
///int max_indx = max_element(a,a+n)-a;[0 base index]
///int min_indx = min_element(a,a+n)-a;[0 base index]

///Substring_Check:
///str1(main string)
///str2(substring)
///if((str1.find(str2) != string :: npos))yy;
///else nn;
using namespace std;
int main()
{
    FIO;
    int n,cnt=0;
    cin>>n;
    pii a[n];

    int mn=a[0].second,indx=0;

    for(int i=0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;
        if(mn<a[i].second)
        {
            mn=a[i].second;
            indx=i;
        }
    }

    for(int i=0;i<indx;i++)
    {
        cnt+=a[i].first*a[i].second;
    }
    int sm=0;
    for(int i=indx;i<n;i++)
    {
        sm+=a[i].first;
    }

    cnt+=(mn*sm);
    cout<<cnt<<nl;

    return 0;
}
