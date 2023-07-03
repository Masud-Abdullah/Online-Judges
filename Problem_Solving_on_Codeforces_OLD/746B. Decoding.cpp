#include<bits/stdc++.h>
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
    ll n,i,j;
    cin>>n;
    string str,s;
    cin>>str;

    if(n%2!=0)
    {
       //cout<<str[0];
       s+=str[0];
       for(i=1;i<sz(str);i++)
       {
           if(i%2==0)s+=str[i];
           else s=str[i]+s;
       }
       cout<<s<<nl;
    }
    else
    {
        for(i=0;i<sz(str);i++)
       {
           if(i%2!=0)s+=str[i];
           else s=str[i]+s;
       }
       cout<<s<<nl;
    }


    return 0;
}



