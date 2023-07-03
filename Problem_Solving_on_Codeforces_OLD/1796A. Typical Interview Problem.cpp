#include<bits/stdc++.h>
#define pii pair<int,int>
#define ll long long
#define endl '\n'
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main()
{
    fastIO;

    int t,n;
    string st="FBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFB";
    string s;

    cin>>t;

    while(t--)
    {
        cin>>n>>s;

        bool f=false;

        int sz=s.size();

        for(int i=0; i<st.size()-sz; i++)
        {
            string tm;

            for(int j=0; j<sz; j++)
                tm.push_back(st[i+j]);

            if(tm==s)
            {
                f=true;
                break;
            }
        }

        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;

}

/*#include<bits/stdc++.h>
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
*/
