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
        sort(s.begin(),s.end());

        for(int i=0;i<sz(s)-1;i++)
        {
            if(s[i]==s[i+1])cnt++;
        }

         if(s[0]==s[1] && s[2]==s[3] && s[2]!=s[1])cnt=0;

        if(cnt==0)cout<<4<<nl;
        else if(cnt==1)cout<<4<<nl;
        else if(cnt==2)cout<<6<<nl;
        else cout<<-1<<nl;
    }
    return 0;
}
