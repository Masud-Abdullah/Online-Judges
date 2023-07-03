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
        int cnt=0;
        string s1,s2;
        cin>>s1>>s2;

        for(int i=0;i<sz(s2)-1;i++)
        {
            int c1=0,c2=0;
            for(int j=0;j<sz(s1);j++)
            {
                if(s2[i]==s1[j])
                {
                    c1=j+1;
                }
            }
            for(int j=0;j<sz(s1);j++)
            {
                if(s2[i+1]==s1[j])
                {
                    c2=j+1;
                }
            }
            cnt+= abs(c2-c1);
        }
        cout<<cnt<<nl;
    }
    return 0;
}
