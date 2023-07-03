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
    fio;
    ll i;
    string str1;
    for(i=1;i<100;i++)
    {
        if(i%3==0)str1+='F';

        if(i%5==0)str1+='B';
    }

    ll t;
    cin>>t;
    while(t--)
    {
        ll k;
        cin>>k;
        string str2;
        cin>>str2;

        if((str1.find(str2) != string::npos ))cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }


    return 0;
}

/* for(i=0;i<s.size();i++)
        {
            if((s[i]=='F' && s[i+1]=='B')||(s[i]=='F' && s[i-1]=='B')||(s[i]=='F' && s[i-1]=='F')||(s[i]=='F' && s[i+1]=='F')|| (s[i]=='B' && s[i-1]=='F') ||(s[i]=='B' && s[i+1]=='F'))
            {
                f=1;
                break;
            }
        }
        if(f==1)cout<<"YES"<<nl;
        else if(f==0)cout<<"NO"<<nl;*/
/*
    ll t;
    cin>>t;
    while(t--)
    {
        ll k,i,f=0;
        cin>>k;
        string s;
        cin>>s;

        if(k==1)
        {
            if(s[0]=='F'|| s[0]=='B')cout<<"YES"<<nl;
            else cout<<"NO"<<nl;
        }
        else if(k==2)
        {
            if(s[0]=='F' && s[1]=='B')||(s[0]=='F' && s[1]=='F')||(s[0]=='B'&& s[1]=='F')cout<<"YES"<<nl;
            else cout<<"NO"<<nl;
        }
        else if(k==3)
        {
            if(s=="FBF" || s=="BFF" || s=="FFB")cout<<"YES"<<nl;
            else cout<<"NO"<<nl;
        }
        else
        {
            for(i=0;i<)
        }


    }*/
