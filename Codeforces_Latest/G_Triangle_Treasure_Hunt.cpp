#include <bits/stdc++.h>
#define nl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ss " "
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
/// sort(a,a+n); array sorting[0 base index]
/// reverse(a,a+n); array reverse[0 base index]
/// sort(s.begin(),s.end()); string sorting
/// reverse(s.begin(),s.end()); string reverse
/// int max_element = *max_element(a,a+n);[0 base index]
/// int min_element = *min_element(a,a+n);[0 base index]
/// int max_indx = max_element(a,a+n)-a;[0 base index]
/// int min_indx = min_element(a,a+n)-a;[0 base index]

/// Substring_Check:
/// str1(main string)
/// str2(substring)
/// if((str1.find(str2) != string :: npos))yy;
/// else nn;

/// int a[n];
/// iota(a, a + n, 1);  >>>>>>>>>>>> eta diye n length er ekta array te 1-n porjonto value gulo sequentially set kora jay.
using namespace std;
int len(int x1,int y1,int x2,int y2,int x3,int y3)
{
    int ans= abs((x1*y2+x2*y3+x3*y1)-(y1*x2+y2*x3+y3*x1))/2;
    return ans;
}
//Evabe hobe na. dp lagbe
int main()
{
    FIO;  
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,e,f,x,y;
        cin>>a>>b>>c>>d>>e>>f>>x>>y;

        int ans1= len(a,b,c,d,e,f);
        int ans2=len(a,b,c,d,x,y);
        int ans3=len(a,b,e,f,x,y);
        int ans4=len(c,d,e,f,x,y);

        if(ans2==0 || ans3==0 || ans4==0)cout<<"Try Again…"<<nl;
        else if(ans1==ans2+ans3+ans4)cout<<"Door Unlocked"<<nl;
        else cout<<"GET OUT !!"<<nl;

       // cout<<ans1<<" "<<ans2<<" "<<ans3<<" "<<ans4<<nl;
         // else if(ans1>ans2+ans3+ans4)cout<<"Try Again…"<<nl;

    }

    return 0;
}
