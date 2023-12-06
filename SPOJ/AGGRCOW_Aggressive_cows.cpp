#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll n,cows;cin>>n>>cows;
        ll a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);

        ll ans=0;
        ll lo=a[0],hi=a[n-1],mid;
        while(lo<=hi)
        {
            mid = (lo+hi)/2;
            ll cnt=1,mn=a[0];
            bool f=false;
            for(int i=0;i<n;i++)
            {
                if(a[i]-mn>=mid)
                {
                    cnt++;
                    mn=a[i];
                }
            }

            if(cnt>=cows)f=true;

            if(f)
            {
                if(ans>mid)break;
                ans=max(ans,mid);
                lo=mid+1;
            }
            else
            {
                hi=mid-1;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}