#include<bits/stdc++.h>
#define   nl         "\n"
#define   yy         "YES"
#define   nn         "NO"
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;
    ll n,i;
    cin>>n;
    ll a[100005],len=2;
    a[0]=0;
    a[1]=1;

    for(i=2;(a[i-1]+a[i-2])<=n ;i++)
    {
        a[i]=a[i-1]+a[i-2];
        len++;
    }
    ll indx;

    for(i=n;i<len;i++)
    {
        if(a[i]==n)
        {
            indx=i;
            break;
        }
    }

    //cout<<len<<nl;
    //for(i=0;i<len;i++)cout<<a[i]<<" ";
    cout<<0<<" "<<a[len-2]<<" "<<a[len-3]<<nl;


    return 0;
}


