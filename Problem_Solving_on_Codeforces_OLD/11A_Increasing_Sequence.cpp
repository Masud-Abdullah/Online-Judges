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
    int n,d,i,moves=0;
    cin>>n>>d;
    int b[n+5];
    for(i=0;i<n;i++)cin>>b[i];


    for(i=1;i<n;i++)
    {
        if(b[i]<=b[i-1])
        {
            moves+=((b[i-1]-b[i])/d)+1;
            b[i]+=(((b[i-1]-b[i])/d)+1)*d;
        }
       //else if(b[i]==b[i-1])
        //{
             /*moves+=(b[i-1]-b[i]/d)+1;
            b[i]+=((b[i-1]-b[i]/d)+1)*d;*/
           // moves++;
           // b[i]+=d;
        //}
    }
    cout<<moves<<nl;

    return 0;
}



