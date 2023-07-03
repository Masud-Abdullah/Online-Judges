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
        int cnt=0;
        string s;
        cin>>s;

        int len = s.size();

        if(len==1)
        {
            if(s=="_")
            {
                cout<<2<<nl;
                continue;
            }
            else 
            {
                cout<<1<<nl;
                continue;
            }
        }
        if(s[0]=='_')cnt++;

        if(s[len-1]=='_')cnt++;

        for(int i=0;i<len-1;i++)
        {
            if(s[i]=='_' && s[i+1]=='_')cnt++;
        }

        cout<<cnt<<nl;
    }
    return 0;
}
