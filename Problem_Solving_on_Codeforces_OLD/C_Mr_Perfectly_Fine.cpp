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

///int a[n];
///iota(a, a + n, 1);  >>>>>>>>>>>> eta diye n length er ekta array te 1-n porjonto value gulo sequentially set kora jay.
using namespace std;
int main()
{
    FIO;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int f1=0,f2=0, one=INT_MAX,two=INT_MAX,ans=INT_MAX,t1=0,t2=0;

        for(int i=0;i<n;i++)
        {
            int m;
            string s;
            cin>>m>>s;

            if(s[0]=='1' && s[1]=='1')
            {
                ans=min(ans,m);
                f1++;
            }
            else
            {
                if(s[0]=='1')
                {
                    one=min(one,m);
                    t1++;

                }
                else if(s[1]=='1')
                {
                    two=min(two,m);
                    t2++;
                }
            }
        }

        if(f1>0 && t1>0 && t2>0)
        {
            cout<<min(ans,one+two)<<nl;
        }
        else if(f1==0 && t1>0 && t2>0)cout<<one+two<<nl;
        else if(f1>0 && (t1==0 || t2==0))cout<<ans<<nl;
        else cout<<-1<<nl;
    }

    return 0;
}

