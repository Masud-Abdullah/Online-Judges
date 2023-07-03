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
        ll n,odd=0,i,x=0,y=0;
        cin>>n;
        string s;
        cin>>s;
        for(i=0;i<s.size();i++)
        {
            if((s[i]-'0')%2!=0)
            {
                odd++;
                if(x==0)x=s[i]-48;
                else y=s[i]-48;
            }
        }

        if(odd<=1)cout<<-1<<nl;
        else cout<<x<<y<<nl;



    }

    return 0;
}


