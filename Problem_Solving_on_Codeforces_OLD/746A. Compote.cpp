#include<bits/stdc++.h>
#define   nl         "\n"
#define   yy         "YES"
#define   nn         "NO"
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
    int a,b,c,cnt=0;
    cin>>a>>b>>c;

    if(a<1 || b<2 || c<4)
    {
        cout<<0<<nl;
        return 0;
    }

    while(a>=1 && b>=2 && c>=4)
    {
        a-=1;
        b-=2;
        c-=4;
        cnt++;
    }

    cout<<cnt*7<<nl;

    return 0;
}



