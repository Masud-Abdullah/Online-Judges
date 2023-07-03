#include<bits/stdc++.h>
#define  nl         "\n"
#define  ll     long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,A,f=0;
        string s;
        cin>>s;

        for(i=1;i<s.size();i++)
        {
            if(s[i]=='a')
            {
                A=i;
                f=1;
                break;

            }
        }

        if(f==0)
        {
            cout<<s[0]<<" ";
            for(i=1;i<s.size()-1;i++)cout<<s[i];

            cout<<" "<<s[s.size()-1]<<"\n";
        }
        else if(f==1)
        {
            for(i=0;i<A;i++)cout<<s[i]<<" ";

            for(i=A;i<s.size()-1;i++)cout<<s[i];

            cout<<" "<<s[s.size()]<<"\n";
        }
    }

    return 0;
}


