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
    int t;
    cin>>t;
    while(t--)
    {
        int n,f=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];

        string s;
        cin>>s;

        for(int i=0;i<n;i++)
        {
            if(a[i]<i+1 && s[i]=='B')
            {
                //cout<<"NO"<<nl;
                f=1;
                break;
            }

             if(a[i]>i+1 && s[i]=='R')
            {
                //cout<<"NO"<<nl;
                f=1;
                break;
            }
        }

        cout<<(f==0 ? "YES" : "NO")<<nl;
    }
    return 0;
}
