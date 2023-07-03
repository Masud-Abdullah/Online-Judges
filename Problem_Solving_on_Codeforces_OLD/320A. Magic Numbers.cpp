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
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int i;
    string s;
    cin>>s;

    if()
    for(i=0;i<sz(s);i++)
    {
        if(s[i]-'0'!=1 && s[i]-'0'!=4)
        {
            cout<<"NO"<<nl;
            return 0;
        }
    }

    if(s[0]-'0'==4)
    {
        cout<<"NO"<<nl;
            return 0;
    }

    for(i=1;i<sz(s)-1;i++)
    {
       /* if(s[i]-'0'==1 && s[i-1]-'0'==1 && s[i+1]-'0'==1)
        {
            cout<<"NO"<<nl;
            return 0;
        }
        else */if(s[i]-'0'==4 && s[i-1]-'0'==4 && s[i+1]-'0'==4)
        {
            cout<<"NO"<<nl;
            return 0;
        }
        else continue;
    }

    cout<<"YES"<<nl;


    return 0;
}

/// 1 14 144
/// 11414411441414414414
 ///14 1 144 144 1 14 1 14 144 144 14 1 1 144 14 14 144 1 14 1 144 144 1 14 1 14 144 144 14 1 1 144 14 14 144 1

