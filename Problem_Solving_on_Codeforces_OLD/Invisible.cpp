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
    int t;
    cin>>t;
    while(t--)
    {
        int n,f=0,aa,b;
        cin>>n;
        //cout<<n<<nl;

        int a[n+1];
        a[0]=0;
        for(int i=1;i<=n;i++)cin>>a[i];

        for(int i=1;i<=n;i++)
        {
            a[i]+=a[i-1];
        }
        int x,y;
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                x=a[j]-a[i-1];
                y=j-i+1;
                if(x%y!=0)
                {
                    f=1;
                    aa=i;
                    b=j;
                    break;

                }
            }
            if(f==1)break;
        }

        if(f==1)
        {
            for(int i=aa;i<=b;i++)cout<<i<<ss;

            cout<<nl;
        }
        else cout<<-1<<nl;
    }

    return 0;
}
// int x = a[j] - a[i - 1];
//                 int y = j - i + 1;
//                 if (x % y != 0)
//                 {
//                     f = 1;
//                     break;
//                 }

