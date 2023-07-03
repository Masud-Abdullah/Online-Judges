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
    unsigned long long t,i;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        unsigned long long n,j;
        cin>>n;
        //cout<<"Case "<<i<<": ";
        if(n%9==0)cout<<"Case "<<i<<": "<<((n*10)/9)-1<<" "<<((n*10)/9)<<nl;
        else cout<<"Case "<<i<<": "<<(n*10)/9<<nl;


    }

    return 0;
}



/*if(n%9==0)cout<<"Case "<<i<<": "<<((n*10)/9)-1<<" "<<((n*10)/9)<<nl;
        else cout<<"Case "<<i<<": "<<(n*10)/9<<nl;*/
/*if(n%9!=0)cout<<(n*10)/9<<nl;
        else
        {
            for(j=n+1; j<=n+n; j++)
            {
                if(j-(j/10)==n)cout<<j<<" ";
            }
            cout<<nl;
        }*/
