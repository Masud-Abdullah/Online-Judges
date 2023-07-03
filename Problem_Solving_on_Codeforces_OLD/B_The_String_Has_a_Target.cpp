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
        int n,indx;
        cin>>n;
        string s;
        cin>>s;
        char mn='z';
        for(int i=1;i<sz(s);i++)
        {
            if(s[i]<=mn)
            {
                mn=s[i];
                indx=i;
            }
        }

        if(mn>s[0])
        {
            cout<<s<<nl;
            continue;
        }

        if(s.size()==1)
        {
            cout<<s<<nl;
            continue;
        }

        if(s[0]<mn)cout<<s[0]<<mn;
        else cout<<mn<<s[0];

        for(int i=1;i<sz(s);i++)
        {
            if(i!=indx)cout<<s[i];
        }
        cout<<nl;

    }
    return 0;
}
