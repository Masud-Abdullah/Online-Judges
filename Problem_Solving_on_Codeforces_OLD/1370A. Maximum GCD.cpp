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
        int n,i,j,gcd=0;
        cin>>n;
        /*for(i=1;i<=n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                int x=__gcd(i,j);
                if(x>gcd)gcd=x;
            }
        }*/

        if(n<=3)gcd=1;
        else if(n%2==0)gcd=__gcd(n/2,n);
        else gcd=max({__gcd(3,n),__gcd((n-1)/2,n-1)});
        cout<<gcd<<nl;
    }

    return 0;
}



