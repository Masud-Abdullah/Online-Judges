#include<bits/stdc++.h>
#define   nl         "\n"
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define  FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
#define N 10000000
int a[N];

int main()
{
    FIO;

    int i,j;
    a[1]=1;

	for(i=2;i*i<=N;i++)
	{
		if(a[i]==0)
		{
			for(j=i*i;j<=N;j+=i)
			{
				a[j]=1;
			}
		}
	}
    ll n;
    cin>>n;

    if(n%2==0)
    {
        if(n/2%2==0)cout<<n/2<<" "<<n/2<<nl;
        else cout<<(n/2)-1<<" "<<(n/2)+1<<nl;
    }
    else
    {
        ll x=n/2;
        ll y=n/2+1;
        for(i=x,j=y;;i--,j++)
        {
            if(i+j==n)
            {
                if(a[i]==1 && a[j]==1)
                {
                    cout<<i<<" "<<j<<nl;
                    break;
                }
            }
        }
    }

    return 0;
}



