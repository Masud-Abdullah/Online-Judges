#include<bits/stdc++.h>
#define pii pair<int,int>
#define ll long long
#define endl '\n'
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

int main()
{
    fastIO;

    int t;

    cin>>t;

    while(t--)
    {
        int a,b,c,d,moves=0;

        cin>>a>>b>>c>>d;

        if(b>d)moves=-1;
        else
        {
            int tm=(d-b);
            moves+=tm;
            a+=tm;

            if(a<c)moves=-1;
            else moves+=(a-c);
        }

        cout<<moves<<endl;
    }
    return 0;
}


/*#include<bits/stdc++.h>
#define   nl         "\n"
#define   yy         "YES"
#define   nn         "NO"
#define   ss         " "
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;
    ll t;
	cin>>t;
	while(t--) {
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		if(b<=d && c<=a+d-b) {
			cout<<(d-b)+(a+d-b-c)<<nl;
		} else {
			cout<<-1<<nl;
		}
	}

    return 0;
}


*/
