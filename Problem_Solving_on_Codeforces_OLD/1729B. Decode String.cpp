#include<bits/stdc++.h>
#define   nl         "\n"
#define   nn         (cout << "NO\n")
#define   yy         (cout << "YES\n")
#define   ss         " "
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;

    char ch;
    int t;
    cin>>t;
    string s;
    for(ch='a'; ch<='z'; ch++)
    {
        s+=ch;
    }
    // cout<<s<<nl;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        string str,tm;
        cin>>str;
        // reverse(s.begin(),s.end());
        // cout<<s<<nl;
        for(i=n-1; i>=0; i--)
        {
            if(str[i]-'0'!=0)
            {
                tm+=s[(str[i]-'0')-1];
            }
            else if(str[i]-'0'==0)
            {
                tm+=(s[(((str[i-2]-'0')*10)+str[i-1]-'0')-1]);
                i-=2;
            }
        }
        reverse(tm.begin(),tm.end());
        cout<<tm<<nl;
    }
    return 0;
}
