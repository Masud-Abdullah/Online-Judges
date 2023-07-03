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
        int l,r,i,luckiest=0,luckiest2;
        cin>>l>>r;
        int p=min(l+90+1,r);
        for(i=l;i<=p;i++)
        {
            int max=0,min=1e9,t=i;
            while(t>0)
            {
                int x=t%10;
                if(x>=max)max=x;

                if(x<=min)min=x;

                t/=10;
            }
            if(max-min>=luckiest)
            {
                luckiest=max-min;
                luckiest2=i;
            }//else luckiest2=i;
        }
        cout<<luckiest2<<nl;

    }

    return 0;
}



