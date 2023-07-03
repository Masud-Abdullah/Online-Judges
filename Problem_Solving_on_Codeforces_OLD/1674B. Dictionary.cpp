/*#include<bits/stdc++.h>
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

    char ch;
    int t;
    cin>>t;
    string s;
    for(ch='a'; ch<='z'; ch++)
    {
        s+=ch;
    }

    while(t--)
    {
        int i,ans=0,x,y;
        string st;
        cin>>st;
        for(i=0;i<sz(s);i++)
        {
            if(st[0]==s[i])x=i;

            if(st[1]==s[i])y=i+1;
        }
        if(y<x)cout<<x*25+y<<nl;
        else cout<<x*25+y<<nl;
        //cout<<x*25+y<<nl;
    }


    return 0;
}*/
/*#include<bits/stdc++.h>
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
        int ans=0,f=0;
        char i,j;
        string s;
        cin>>s;

        for(i='a';i<='z';i++)
        {
            for(j='a';j<='z';j++)
            {
                if(i!=j)
                {
                    ans++;
                    if(i==s[0] && j==s[1])
                    {
                        f=1;
                        break;
                    }
                }
            }
            if(f==1)break;
        }
        cout<<ans<<nl;
    }

    return 0;
}
*/#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)  ///From Abu Sayeed Vai
    {
        string s;
        cin>>s;
        int ans=0;
        int f=s[0]-'a';
        ans+=(f*25);
        ans+=(s[1]-'a')+1;
        if(s[1]>s[0]) ans--;


        cout<<ans<<endl;
    }
    return 0;
}
