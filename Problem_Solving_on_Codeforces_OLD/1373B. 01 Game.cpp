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
    fio;

    ll t,i;
    cin>>t;
    while(t--)
    {
        ll zero=0,one=0;
        string s;
        cin>>s;

        for(i=0;i<sz(s);i++)
        {
            if(s[i]=='0')zero++;
            else one++;
        }

        cout<<(min(zero,one)%2!=0 ? "DA" : "NET")<<nl;
    }

    return 0;
}
//1
//1011001

