#include<bits/stdc++.h>
#define   nl      "\n"
#define   ll      long long
#define   pii     pair<int,int>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,cnt=0;
        cin>>n;

        for(i=1; ;i++)
        {
            n-=i;
            if(n>=0)cnt++;
            else break;
        }
        cout<<cnt<<nl;
    }

    return 0;
}


