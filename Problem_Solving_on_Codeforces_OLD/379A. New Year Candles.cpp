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
    int a,b,t=0,x;
    cin>>a>>b;

    t+=a;

    while(a>=b)
    {
        t+=a/b;
        x=a%b;
        a=(a/b)+x;
    }

    cout<<t<<nl;

    return 0;
}

/// 7 3

