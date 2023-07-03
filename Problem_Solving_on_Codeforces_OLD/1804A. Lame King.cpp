#include<bits/stdc++.h>
#define   nl         "\n"
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define  FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cout<<"Enter ";
        cin>>a>>b;
        a=abs(a);
        b=abs(b);
        int mx=max(a,b);
        int mn=min(a,b);
        int dif=mx-mn;

        if(a==b)
        {
            cout<<a+b<<nl;
            continue;
        }
        cout<<2*mn+2*dif-1<<nl;
    }

    return 0;
}













/*#include<bits/stdc++.h>
#define   nl         "\n"
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   fio        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fio;
    ll t;
    cin>>t;
    while(t--)
    {
        ll a, b;
        cin >> a >> b;
        a = abs(a);
        b = abs(b);
        ll r = min(a, b);
        int rem = max(a, b) - r;
        cout << 2*r + rem + max(0, rem - 1) << endl;



    }

    return 0;
}
*/

/* ll a,b;
        cin>>a>>b;

        if(abs(a)==abs(b))cout<<abs(a+b)<<nl;
        else
        {
            a=abs(a);
            b=abs(b);
            cout<<(abs(max(a,b))+(abs(max(a,b))-1))<<nl;
        }*/
