#include<bits/stdc++.h>
#define  nl         "\n"
#define  ll     long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,count=0;
        cin>>n;
        ll a[n],b[n];

        for(i=0; i<n; i++)cin>>a[i];

        for(i=0; i<n; i++)cin>>b[i];

        ll min_A= *min_element(a,a+n);
        ll min_B= *min_element(b,b+n);

        for(i=0; i<n; i++)
        {
            if(a[i]!=min_A && b[i]==min_B)count+=a[i]-min_A;
            else if(a[i]==min_A && b[i]!=min_B)count+=b[i]-min_B;
            else if(a[i]!=min_A && b[i]!=min_B)
            {
                count+=max(a[i]-min_A,b[i]-min_B);//+(a[i]-min(a[i]-min_A,b[i]-min_B));
                //count+=min(a[i]-min_A,b[i]-min_B);//+(b[i]-min(a[i]-min_A,b[i]-min_B));
            }
        }
        cout<<count<<endl;
    }

    return 0;
}


