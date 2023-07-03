#include<bits/stdc++.h>
#define   nl         "\n"
#define   nn         (cout << "NO\n")
#define   yy         (cout << "YES\n")
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
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,pos=0,neg=0;
        cin>>n;
        int b[n+5];
        for(i=1;i<=n;i++)
        {
            cin>>b[i];
            if(b[i]>0)pos++;
            else neg++;
        }
        int tm;

        for(i=1;i<=pos;i++)
        {
            cout<<i<<ss;
            tm=i;
        }
        for(i=1;i<=neg;i++)
        {
            tm--;
            cout<<tm<<ss;
        }
        cout<<nl;

        int x=min(pos,neg);

        for(i=1;i<=2*x;i++)
        {
            if(i%2!=0)
            {
                cout<<1<<ss;
            }
            else
            {
                cout<<0<<ss;
            }
        }
        if(2*x%2==0)tm=0;
        else tm=1;

        int y=max(pos,neg)-min(pos,neg);
        for(i=1;i<=y;i++)
        {
            tm++;
            cout<<tm<<ss;
        }
        cout<<nl;


    }

    return 0;
}



