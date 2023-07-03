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
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n,d,i,x=0,min=1e9;
        cin>>n>>d;
        string s;
        cin>>s;


       for(i=0;i<sz(s);i++)
       {
           if((s[i]-'0')<d && x==0)
           {
               cout<<d;
               x=1;
           }
           cout<<s[i];
       }
       if(x==0)
       {
           cout<<d<<nl;
       }else cout<<nl;
    }

    return 0;
}

/*int n,d,i,x=0,min=1e9;
        cin>>n>>d;
        string s;
        cin>>s;

        for(i=0;i<sz(s);i++)
        {
            if(s[i]-'0'<=min)min=s[i]-'0';
        }

       for(i=0;i<sz(s);i++)
       {
           if((s[i]-'0')<=d && x==0 && min!=d)
           {
               cout<<d;
               x=1;
           }
           cout<<s[i];
       }
       if((d==0 || min==d)&& x==0)
       {
           cout<<d<<nl;
       }else cout<<nl;*/
/*
765443
10
544
6666
613579
987531
98765443210123456789
773737
210000000
70589590
8281271277321

*/

