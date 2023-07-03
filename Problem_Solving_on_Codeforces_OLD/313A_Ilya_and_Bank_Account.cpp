#include<bits/stdc++.h>
#define   nl         "\n"
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   fio        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main()
{
    ll n;
    cin>>n;

    if(n>0)cout<<n<<nl;
    else{
        n*=-1;
        cout<<-1*min({n/10,(n/100)*10+(n%10)})<<nl;


    }

    return 0;
}


