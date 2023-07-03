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
        ll n,i;
        cin>>n;
        ll a[n];

        ll k=(n-1)/2;

        if(n%2!=0 && n<5)cout<<"NO"<<endl;
        else if(n%2!=0 && n>=5)
        {
            cout<<"YES"<<endl;
            for(i=1;i<=n;i++)
            {
                if(i%2!=0)cout<<k-1<<" ";
                else if(i%2==0)cout<<-k<<" ";
            }
            cout<<endl;
        }
        else if(n%2==0)
        {
            cout<<"YES"<<endl;
            for(i=1;i<=n;i++)
            {
                if(i%2!=0)cout<<1<<" ";
                else if(i%2==0)cout<<-1<<" ";
            }
            cout<<endl;
        }
    }


    return 0;
}


