/*1 2
1 3
2 1
2 1
1 2
3 2
1 2
3 2
2 1
2 1
3 1
2 2
2 2
1 2
3 2
2 3
1 3
2 2
3 1
3 2
1 2
1 1
3 2
2 1
2 3
3 1
1 1
3 2
2 2
2 3
1 3
2 2
1 2
2 2
2 3
3 3
2 2
3 3
2 1
3 2
3 3
1 3
1 2
3 3
1 3
1 1
1 3
2 2
2 3
3 2
3 3
3 3
1 3
2 1
1 2
2 1
3 3
2 3
2 3
2 3
2 3
3 2
3 1
2 3
1 2
2 3
1 2
3 1
1 3
3 1
3 1
2 1
2 2
2 3
3 1
3 3
1 2
2 2
3 1
1 1
3 1
3 3
3 1
1 2
2 1
1 2
2 3
2 1
1 3
2 3
2 1
3 1
1 2
3 1
2 2
3 3
1 1
3 2
1 1
3 1
*/








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
    ll t;
    cin>>t;
    while(t--)
    {
        ll a1,a2,b1,b2;
        cin>>a1>>b1;
        cin>>a2>>b2;

         if((a1==a2 && b1+b2==a1)||(a1==b2 && a2+b1==a1)||(b1==a2 && a1+b2==b1)||(b1==b2 && a1+a2==b1))cout<<"YES"<<nl;
            else cout<<"NO"<<nl;
        /*{
            if(b1+b2==a1)cout<<"YES"<<nl;
            else cout<<"NO"<<nl;
        }
        else if(a1==b2)
        {
            if(a2+b1==a1)cout<<"YES"<<nl;
            else cout<<"NO"<<nl;
        }
        else if(b1==a2)
        {
            if(a1+b2==b1)cout<<"YES"<<nl;
            else cout<<"NO"<<nl;
        }
        else if(b1==b2)
        {
            if(a1+a2==b1)cout<<"YES"<<nl;
            else cout<<"NO"<<nl;
        }
        else cout<<"NO"<<nl;*/
    }

    return 0;
}
/* if((a1+b1==a2 && a1+b1==b2) || (a2+b1==a1 && a2+b1==b2)||(a1+b2==a2 && a1+b2==b1)||(a2+b2==a1 && a2+b2==b1))cout<<"YES"<<nl;
            else cout<<"NO"<<nl;*/

///a1 b1
///a2 b2
