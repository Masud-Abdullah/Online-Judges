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
        ll n,k,i,f=0,l,r,L=0,R=1e9;
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>l>>r;
            if(k>=l && k<=r)
            {
                L=max(L,l);
                R=min(R,r);
            }
            else continue;
        }

        if(L==R)cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }

    return 0;
}


