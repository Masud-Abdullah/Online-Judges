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

    ll n,i,x=0,y=0;
    cin>>n;

    ll r[n],b[n];

    for(i=0;i<n;i++)cin>>r[i];

     for(i=0;i<n;i++)cin>>b[i];


     for(i=0;i<n;i++)
     {
         if(r[i]==1 && b[i]==0)x++;
         else if(r[i]==0 && b[i]==1)y++;
     }

    if(x==0)cout<<-1<<nl;
    else cout<<(((y+1)%x==0)? (y+1)/x : (y+1)/x+1)<<nl;
    //else cout<<s2/s1+1<<nl;





    return 0;
}


