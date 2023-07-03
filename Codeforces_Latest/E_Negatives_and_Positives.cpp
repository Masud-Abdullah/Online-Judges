#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for(int i=0;i<n;i++)cin>>a[i];

        sort(a,a+n);

        for(int i=0;i<n-1;i++)
        {
            if(a[i]<0 && a[i+1]<0)
            {
                a[i]*=-1;
                a[i+1]*=-1;
            }
            else if(a[i]<0 && a[i+1]>=0 && abs(a[i])>a[i+1])
            {
                a[i]*=-1;
                a[i+1]*=-1;
            }
            else if(a[i]>0 && a[i+1]<0 && abs(a[i+1])>a[i])
            {
                a[i]*=-1;
                a[i+1]*=-1;
            }
        }

        ll sum=0;
         for(int i=0;i<n;i++)
         {
            sum+=a[i];
         }
         cout<<sum<<endl;
    }
    return 0;
}