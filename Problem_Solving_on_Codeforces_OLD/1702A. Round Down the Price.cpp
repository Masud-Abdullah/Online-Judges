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
        int m;
        cin>>m;
        string str = to_string(m);
        int len=sz(str);
        //cout<<len<<nl;
        ll val=1;
        for(int i=1; i<len; i++)
        {
            val*=10;
        }

        if(val==m)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<m-val<<endl;
        }
        //cout<<val<<nl;
    }

    return 0;
}


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
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        int a=1,b=10,c=100,d=1000,e=10000,f=100000,g=1000000,h=10000000,i=100000000,j=1000000000;

        if(m>=a && m<b)cout<<m-a<<nl;
        else if(m>=b && m<c)cout<<m-b<<nl;
        else if(m>=c && m<d)cout<<m-c<<nl;
        else if(m>=d && m<e)cout<<m-d<<nl;
        else if(m>=e && m<f)cout<<m-e<<nl;
        else if(m>=f && m<g)cout<<m-f<<nl;
        else if(m>=g && m<h)cout<<m-g<<nl;
        else if(m>=h && m<i)cout<<m-h<<nl;
        else if(m>=i && m<j)cout<<m-i<<nl;
        else if(m>=j)cout<<m-j<<nl;
    }



    return 0;
}
*/
