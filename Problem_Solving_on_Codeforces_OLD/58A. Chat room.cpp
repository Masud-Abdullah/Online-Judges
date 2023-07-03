#include<bits/stdc++.h>
#define   nl         "\n"
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;
    ll i,x=0;
    string s;
    cin>>s;

    for(i=0;i<sz(s);i++)
    {
        if(x==0 && s[i]=='h')x++;
        else if(x==1 && s[i]=='e')x++;
        else if(x==2 && s[i]=='l')x++;
        else if(x==3 && s[i]=='l')x++;
        else if(x==4 && s[i]=='o')x++;
    }

    //cout<<x<<nl;
    cout<<(x==5?"YES" : "NO")<<nl;

    return 0;
}



