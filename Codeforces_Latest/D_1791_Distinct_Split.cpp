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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        ll a[26]={0},aa[26]={0};
        ll b[n]={0},bb[n]={0};
        ll cnt=0,bnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(a[s[i]-'a']==0)
            {
                a[s[i]-'a']++;        //a a v b d j h h
                cnt++;
                b[i]=cnt;
            }
            b[i]=cnt;
        }

         for(int i=n-1;i>=0;i--)
        {
            if(aa[s[i]-'a']==0)
            {
                aa[s[i]-'a']++;
                bnt++;
                bb[i]=bnt;
            }
            bb[i]=bnt;
        }

         for(int i=0;i<n;i++)
         {
             cout<<b[i]<<" ";
         }
         cout<<nl;

          for(int i=0;i<n;i++)
         {
             cout<<bb[i]<<" ";
         }
         cout<<nl;

        /*ll mx=INT_MIN;
        for(int i=0;i<n-1;i++)
        {
            mx=max(mx,(b[i]+bb[i+1]));
        }
        cout<<mx<<endl;*/
    }
    return 0;
}

//TLE khawa code
// int st(int x,int y,string s)
// {
//     set<char>st1;
//     for(int i=0; i<x; i++)
//     {
//         st1.insert(s[i]);
//     }
//     set<char>st2;
//     for(int i=x; i<sz(s); i++)
//     {
//         st2.insert(s[i]);
//     }
//     return(sz(st1)+sz(st2));
// }
// int main()
// {
//     FIO;
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         ll n;
//         cin>>n;
//         string s;
//         cin>>s;
//         int mx=0;
//         for(int i=0; i<=sz(s); i++)
//         {
//             mx=max(mx,st(i,i+1,s));
//         }
//         cout<<mx<<endl;

//         /*int ch[26]={0};
//         for(int i=0;i<sz(s);i++)
//         {
//             ch[s[i]-97]++;
//         }
//         int sum=0;
//         for(int i=0;i<26;i++)
//         {
//             if(ch[i]==1)sum++;
//             else if(ch[i]>1)sum+=2;
//         }
//         cout<<sum<<endl;*/

//     }

//     return 0;
// }




