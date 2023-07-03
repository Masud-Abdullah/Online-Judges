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
    fio;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,cnt=0;
        cin>>n;
        ll a[n+5];
        for(i=1;i<=n;i++)cin>>a[i];


        a[0]=0;
        a[n+1]=1439;
        for(i=0;i<=n;i++)
        {
            if(a[i+1]-a[i]>=240)cnt+=2;
            else if(a[i+1]-a[i]>=120)cnt++;
        }

        if(cnt>=2)cout<<"YES"<<nl;
        else cout<<"NO"<<nl;


    }

    return 0;
}


