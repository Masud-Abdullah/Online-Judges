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
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int size=sz(s),f=0,i,j;

        if(size%2!=0)nn;
        else
        {
            for(i=0,j=size/2;j<size;i++,j++)
            {
                if(s[i]!=s[j])
                {
                    f=1;
                    break;
                }
            }
            if(f==1)nn;
            else yy;
        }
    }



    return 0;
}
