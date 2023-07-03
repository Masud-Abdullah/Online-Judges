#include<bits/stdc++.h>
#define   nl      "\n"
#define   ll      long long
#define   pii     pair<int,int>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

int main()
{
    ll n,i,one=0,zero=0;
    cin>>n;
    string s;
    cin>>s;

    for(i=0;i<s.size();i++)
    {
        if(s[i]=='1')one++;
        else zero++;
    }

    if(one==zero)cout<<0<<nl;
    else if(one>zero)cout<<n-(zero*2)<<nl;
    else if(one<zero)cout<<n-(one*2)<<nl;


    return 0;
}


