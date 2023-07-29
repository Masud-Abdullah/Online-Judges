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
#define   sz(v)      (int)v.size()
#define   mm(a, x)   memset(a, x, sizeof(a))
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        while(s[s.size()-1]!='1')
        {
            if(s.empty())break;
            s.pop_back();
        }
        reverse(s.begin(),s.end());
        while(s[s.size()-1]!='1')
        {
             if(s.empty())break;
            s.pop_back();
        }

        int z=0,k=0;
        bool f=true;

        for(int i=0;i<s.size();i++)
        {
            if(f==true)
            {
                if(s[i]=='1')z++;
                else f=false;
            }
            else if(f==false)
            {
                if(s[i]=='1')k++;
                else f=true;
            }
        }

        cout<<max(z,k)<<nl;

       // cout<<s<<nl;
    }
    
    return 0;
}

