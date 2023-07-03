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
    ll n,x,i,j,cnt=0;
    cin>>n>>x;

    for(i=1;i<=n;i++)
    {
       if(x%i==0 && x/i<=n)cnt++;
    }
    cout<<cnt<<nl;



    return 0;
}



