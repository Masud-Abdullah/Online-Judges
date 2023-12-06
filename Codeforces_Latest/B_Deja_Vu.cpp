#include <bits/stdc++.h>
#define   nl         "\n"
#define   ll         long long int
#define   pll         pair<long long,long long>
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;
    ll t;cin>>t;
    while(t--)
    {
        ll n,q;cin>>n>>q;
        ll a[n];
        for(int i=0;i<n;i++)cin>>a[i];

        ll x[q];
        for(int i=0;i<q;i++)cin>>x[i];

        int mn=1e9;
        for(int i=0;i<q;i++)
        {
            int val = x[i];       //just obserbation
            //ekta value er upor ekbar operation korle oita ar kokhono 2^something 
            //diye divisable hobe na obserbation kore dekhechi.
            //abar 2^x diye kono numer Y ke divide kora na gele kokhono kono number 2^z 
            // jekhane z>x oi number diye kokhono Y ke divide kora jabe na.
            //  but z<x hole 2^z diye Y ke divide kora jeteo pare just tokoni amra mn er value
            // update kore second loop a dhukechi.
			if (val >= mn)continue;
			else mn = val;

            ll y=(1<<mn);
            ll z=(1<<(mn-1));
            for(int j=0;j<n;j++)
            {
                if(a[j]%y==0)a[j]+=(z);
            }
        }

        for(int i=0;i<n;i++)cout<<a[i]<<" ";
        cout<<nl;
    }
    return 0;
}

