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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==1)a[i]++;
        }

        cout<<a[0]<<" ";

        for(i=1; i<n; i++)
        {
            while (a[i] % a[i-1] == 0)
            {
                a[i]++;
            }
            cout<<a[i]<<" ";
        }
        cout<<nl;

       // for(i=0; i<n; i++)cout<<a[i]<<" ";

        //cout<<nl;

    }

    return 0;
}


