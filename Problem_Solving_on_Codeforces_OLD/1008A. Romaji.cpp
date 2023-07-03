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
    ll i,f=0;
    string s;
    cin>>s;

    //cout<<s[s.size()-1]<<nl;



    if(s[s.size()-1]!='a'&&  s[s.size()-1]!='e' && s[s.size()-1]!='i' && s[s.size()-1]!='o' && s[s.size()-1]!='u' && s[s.size()-1]!='n')
    {
        cout<<"NO"<<nl;
        return 0;
    }
    else
    {
        for(i=0; i<s.size()-1; i++)
        {
                if(s[i]=='n')continue;
            else if((s[i]!='a'&& s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')&&
               (s[i+1]!='a'&& s[i+1]!='e' && s[i+1]!='i' && s[i+1]!='o' && s[i+1]!='u'))
            {
                cout<<"NO"<<nl;
                return 0;
            }
        }
        cout<<"YES"<<nl;
    }


    return 0;
}


