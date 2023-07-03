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
    FIO;
    int n;
    cin>>n;
    while(n--)
    {
        int a,b,cnt=0;
        cin>>a>>b;

        if(b>a)swap(a,b);

        while(a>0 && b>0)
        {
            cnt+=a/b;
            a=a%b;
            if(b>a)swap(a,b);
        }
        cout<<cnt<<nl;

    }

    return 0;
}



