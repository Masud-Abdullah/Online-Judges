#include<bits/stdc++.h>
#define   nl      "\n"
#define   ll      long long
#define   pii     pair<int,int>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,f=0;
        cin>>n;
        ll a[n],b[n];
        for(i=0;i<n;i++)cin>>a[i];

        for(i=0;i<n;i++)cin>>b[i];

        for(i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                f=1;
                break;
            }
            else continue;
        }

        if(f==0)cout<<0<<endl;
        else{
            ll x=a[i];
            ll ans=0;
            for(i=0;i<n;i++)
            {
                if(b[i]!=x)ans++;
                else break;
            }
            cout<<ans<<nl;
        }




    }

    return 0;
}


