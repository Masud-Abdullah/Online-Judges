#include<bits/stdc++.h>
#define pii pair<int,int>
#define ll long long
#define endl '\n'
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

ll call(ll n)
{
   return (n*(n+1))/2;
}

int main()
{
    fastIO;

    int t;
    ll n,k;

    cin>>t;

    while(t--)
    {
        cin>>n;

        ll h[n+1],k[n+1];

        for(int i=1;i<=n;i++)cin>>k[i];
        for(int i=1;i<=n;i++)cin>>h[i];

        k[0]=0;   ///Abid vai

        ll cost=0,r=0,l=0;

        for(int i=n;i>0;i--)
        {
            if(r==0)
            {
                r=k[i];
                l=k[i]-h[i]+1;
            }

            l=min(l,k[i]-h[i]+1);

            if(l>k[i-1])
            {
                cost+=call(r-l+1);
                r=l=0;
            }

        }
        cout<<cost<<endl;
    }

    return 0;
}
