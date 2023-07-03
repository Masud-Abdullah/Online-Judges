#include<bits/stdc++.h>
#define   nl         "\n"
#define   nn         (cout << "NO\n")
#define   yy         (cout << "YES\n")
#define   ss         " "
#define   ll         long long
#define   pi         pair<int,int>
#define   rv(v)      v.begin(),v.end()
#define   sz(v)      v.size()
#define   mm(a,x)    memset(a,x,sizeof(a))
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;
    int t;
    cin>>t;
    while(t--)
    {
        ll x,n;
        cin>>x>>n;

        ll a,b;
        //a=((n + 1)/2 * ((n + 1)/2 + 1)) – ((n + 1) / 2); //sum of all odd number between 1 and n.
        a=((n+1)/2*((n+1)/2+1))-((n+1)/2);
        b=((n*(n+1))/2)-a;//sum of all even number between 1 and n.

        if(n%2==0)
        {
            x=x-((n/2)*a);
            x=x+((n/2)*b);
        }
        else
        {
            x=x-((n/2)*a);
            x=x+((n/2-1)*b);
        }
        //ll tm=x;
        /*for(ll i=1;i<=n;i++)
        {
            if(x%2==0)x-=i;
            else x+=i;

           // tm=x;
        }*/
        cout<<x<<nl;
    }
    return 0;
}
///(n*(n+1)/2)
