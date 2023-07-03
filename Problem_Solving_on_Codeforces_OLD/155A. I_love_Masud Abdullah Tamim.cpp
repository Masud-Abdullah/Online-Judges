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
    ll n,i,count=0;
    cin>>n;
    ll a[n+5];
    for(i=0;i<n;i++)cin>>a[i];

    ll min=a[0],max=a[0];

    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            count++;
        }
        else if(a[i]>max)
        {
            max=a[i];
            count++;
        }
    }
    cout<<count<<nl;

    return 0;
}


