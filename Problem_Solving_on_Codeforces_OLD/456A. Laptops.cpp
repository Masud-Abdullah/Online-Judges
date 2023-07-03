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
    ll n,a,b,f1=0,f2=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(a>b)f1=1;

        if(a<b)f2=1;
    }

    if(f1==1 && f2==1)cout<<"Happy Alex"<<nl;
    else cout<< "Poor Alex"<<nl;



    return 0;
}


