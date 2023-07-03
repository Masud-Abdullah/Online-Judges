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
 //   FIO;

    int t;
    cin>>t;
    while(t--)
    {
        int n,H,M;
        cin>>n>>H>>M;
        int h[n],m[n],tm;
        for(int i=1;i<=n;i++)
        {
            cin>>h[i]>>m[i];
        }

        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(h[i]>h[j])
                {
                    tm=h[i];
                    h[i]=h[j];
                    h[j]=tm;

                    tm=m[i];
                    m[i]=m[j];
                    m[j]=tm;
                }
            }
        }

        for(int i=0;i<n;i++)cout<<h[i]<<ss;

        cout<<nl;

        for(int i=0;i<n;i++)cout<<m[i]<<ss;

        cout<<nl;

    }


    return 0;
}
/*
3 1 48
1 54
1 45
1 47
*/

