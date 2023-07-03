#include <bits/stdc++.h>
#define   nl         "\n"
#define   nn         (cout << "NO\n")
#define   yy         (cout << "YES\n")
#define   ss         " "
#define   ll         long long
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;
        ll n,mn=200;
        cin>>n;
        pair<ll,ll>a[n];
        //a.first=total needed meat(kg), a.second=price of per kg
        for(int i=0;i<n;i++)
        {
            cin>>a[i].first>>a[i].second;
        }
        ll sum=0;

        for(int i=0;i<n;i++)
        {
            mn=min(mn,a[i].second);
            sum+=(a[i].first*mn);
        }
        cout<<sum<<nl;

    return 0;
}
/*
    //     for(int i=0;i<n;i++)
    //     {
    //         if(a[i].second==mn)
    //         {
    //             tm=i;
    //             break;
    //         }
    //         sum+=(a[i].first*a[i].second);
    //     }
    //    // cout<<tm<<nl;

    //     if(tm==-1)cout<<sum<<nl;
    //     else
    //     {
    //         for(int i=tm;i<n;i++)
    //         {
    //              sum+=(a[i].first*mn);
    //         }
    //         cout<<sum<<nl;
    //     }
*/
