#include<bits/stdc++.h>
#define   nl         "\n"
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,j,f=0;
        cin>>n;
        string s1;
        cin>>s1;
        char s2[n+1];
        for(i=0;i<sz(s1);i++)
        {
            if(i%2==0)s2[i]='1';
            else s2[i]='0';
        }
        s2[i]='\0';

       /* for(i=0;i<sz(s1);i++)
        {
            cout<<s2[i];
        }*/

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(s1[i]==s1[j] && s2[i]!=s2[j])
                {
                    f=1;
                    break;
                }
            }
        }
        cout<<(f==0?"YES":"NO")<<nl;
    }


    return 0;
}



