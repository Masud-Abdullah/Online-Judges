#include<bits/stdc++.h>
#define   nl      "\n"
#define   ll      long long
#define   pii     pair<int,int>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x;
        cin>>x;

        ll a=x%10;

        if(x<10)cout<<((a-1)*10)+1<<nl;
        else if(x>9 && x<100)cout<<((a-1)*10)+3<<nl;
        else if(x>99 && x<1000)cout<<((a-1)*10)+6<<nl;
        else if(x>999 && x<10000)cout<<((a-1)*10)+10<<nl;


    }

    return 0;
}


