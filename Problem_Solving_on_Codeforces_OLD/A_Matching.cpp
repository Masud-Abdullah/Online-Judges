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
        string s;
        cin>>s;

        int cnt=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='?')cnt++;
        }

        // cout<<cnt<<nl;

        if(cnt==0 && s[0]!='0')cout<<1<<nl;
        else if(s[0]=='0')cout<<0<<nl;
        else if(s[0]=='?' && cnt>0)
        {
            //cout<<10*((cnt-1)*9)<<nl;
            int cnt_1=9;

            for(int i=1; i<=cnt-1; i++)
            {
                cnt_1*=10;
            }

            cout<<cnt_1<<nl;
        }
        else if(s[0]!='?' && cnt>0)
        {
            //cout<<cnt*10<<nl;
            int cnt_1=1;
            for(int i=1; i<=cnt; i++)
            {
                cnt_1*=10;
            }
            cout<<cnt_1<<nl;

        }

    }
    return 0;
}
