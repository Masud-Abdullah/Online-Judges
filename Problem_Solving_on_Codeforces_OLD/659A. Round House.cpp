#include<bits/stdc++.h>
#define  nl         "\n"
#define  ll     long long
using namespace std;
int main()
{
    ll n,a,b,i;
    cin>>n>>a>>b;
    ll ans=a;

    for(i=1;i<=abs(b);i++)
    {
        if(b<0 )
        {
            if(ans==1)ans=n;
            else ans--;
        }

        if(b>0)
        {
            if(ans==n)ans=1;
            else ans++;
        }
    }
    cout<<ans<<endl;



    return 0;
}

/// 6 2 -5
