#include<bits/stdc++.h>
#define   nl         "\n"
#define   nn         (cout << "NO\n")
#define   yy         (cout << "YES\n")
#define   ss         " "
#define   ll         long long
#define   pi         pair<int,int>
#define   rv(v)      v.begin(),v.end()
#define   sz(v)      v.size()
#define   mm(a,x)    memset(a,x,sizeof(a))
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;
    int q;
    cin>>q;
    while(q--)
    {
        int n,t,f=0,indx=-1,mx=0;
        cin>>n>>t;

        int a[n+5];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            // if(a[i]>t)
            // {
            //     f++;
            // }
        }

        int b[n+5];
        for(int i=1;i<=n;i++)cin>>b[i];

        for(int i=1;i<=n;i++)
        {
            if(a[i]+(i-1)<=t && b[i]>mx)
            {
                indx=i;
                mx=b[i];
            }
        }
        //cout<<(f==n ? -1 : indx)<<nl;
        cout<<indx<<nl;
    }
    return 0;
}
