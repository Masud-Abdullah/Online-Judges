#include<bits/stdc++.h>
#define   nl         "\n"
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   fio        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,f=0;
        cin>>n;
        string s="meow",str1;
        cin>>str1;

        for(i=0;i<str1.size();i++)
        {
            if(str1[i]>='A' && str1[i]<='Z')str1[i]+=32;
        }

        string str2;

        str2+=str1[0];

        for(i=1;i<str1.size();i++)
        {
            if(str1[i]!=str1[i-1])
            {
                str2+=str1[i];
                //x++;
            }
            else continue;
        }
        //str2[x]='\0';

        //cout<<str2<<nl;

        if(str2==s)cout<<"YES"<<nl;
        else cout<<"NO"<<nl;

    }

    return 0;
}

/*string str2;

        str2[0]=str1[0];

        for(i=1;i<str1.size();i++)
        {
            if(str1[i]!=str1[i-1])
            {
                str2[x]=str1[i];
                x++;
            }
            else continue;
        }
        str2[x]='\0';

        cout<<str2<<nl;*/

        /*for(i=0;i<=str1.size();i++)
        {
            if(str1[i]=='m' && (str1[i+1]!='m'&& str1[i+1]!='e'))
            {
                f=1;
                break;
            }
            else if(str1[i]=='e' && (str1[i+1]!='e'&& str1[i+1]!='o'))
            {
                f=1;
                break;
            }
            else if(str1[i]=='o' && (str1[i+1]!='o'&& str1[i+1]!='w'))
            {
                f=1;
                break;
            }
            else if(str1[i]=='w' && str1[i+1]!='w')
            {
                f=1;
                break;
            }
            else continue;
        }

        if(f==0)cout<<"YES"<<nl;
        else if(f==1)cout<<"NO"<<nl;*/
