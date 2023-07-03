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
        ll n,i,val=0,sum=0;
        cin>>n;
        ll s[n+5];
        for(i=0;i<n;i++)cin>>s[i];

        for(i=0;i<n;i++)
        {
            if(s[i]==0)
            {
                sum+=val;
                val=0;
            }

            if(s[i]>val)
            {
                val=s[i];
            }
        }

        cout<<sum<<nl;


    }

    return 0;
}


