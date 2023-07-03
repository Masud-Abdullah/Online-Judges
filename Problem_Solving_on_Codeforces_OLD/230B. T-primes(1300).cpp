#include<bits/stdc++.h>
#define  nl         "\n"
#define  ll     long long
using namespace std;
int main()
{
    ll t;
     cin >> t;
     ll limit = 1e6;//10^12 er sqr root
     ll seive[limit+5] = {0};    // memset(seive,0,sizeof(seive));

     for(ll i=2;i<=limit;i++)
     {
        if(seive[i]==0)
        {
            for(ll j=i+i;j<=limit;j+=i)
            {
                seive[j]=1;
            }
        }
     }

     while(t--)
     {
         ll n;
         cin >> n;
         ll value1 = sqrt(n);


         if(n<4) cout << "NO"<<nl;
         else if(seive[value1]==0 && value1*value1==n) cout << "YES"<<nl;
         else cout << "NO"<<nl;
     }

    return 0;
}
























/*#include<bits/stdc++.h>
#define  nl         "\n"
#define  ll     long long
using namespace std;
int main()
{
    ll n,i;
    cin>>n;
    while(n--)
    {
        ll x,f=0;
        cin>>x;
        ll y=sqrt(x);

        if(x<=3)cout<<"NO"<<endl;
        else if(x==4)cout<<"YES"<<endl;
        else if(y*y==x)
        {
            for(i=3;i<x;i+=)
            {
                if(x%i==0)f++;
            }
            if(f==1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
        //else if((sqrt(x)*sqrt(x)==x) && x%2!=0)cout<<"YES"<<endl;
        //else cout<<"NO"<<endl;
    }

    return 0;
}


*/





















/*#include<bits/stdc++.h>
#define  nl         "\n"
#define  ll     long long
using namespace std;
int main()
{
    ll n,x,i,j,k,f=0;
    cin>>n;
    while(n--)
    {
        cin>>x;
        ans=sqrt(x);
        f=0;
        for(j=2; j<=ans; j++)
        {
            if(x%j==0)
            {
                f++;
            }
        }
        if(f==1 && ans*ans==x)cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }



    return 0;
}


*/








/*#include<bits/stdc++.h>
#define  nl         "\n"
#define  ll     long long
using namespace std;
int main()
{
    ll n,i,j,f=0;
    cin>>n;
    ll a[n+1];
    for(i=1; i<=n; i++)cin>>a[i];


    for(i=1; i<=n; i++)
    {
        f=0;
        for(j=2; j<=a[i]/2; j++)
        {
            if(a[i]%j==0)
            {
                f++;
            }
        }

        if(f==1)cout<<"YES"<<"\n";
        else if(f==0 || f>=2)cout<<"NO"<<"\n";

    }


    return 0;
}


*/
