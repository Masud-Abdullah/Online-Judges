#include<bits/stdc++.h>
#define   nl         "\n"
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define  FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define N 1000000
int a[N];
using namespace std;
int main()
{
    FIO;
    ll i,j;
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
    if(n==1)cout<<3<<nl;
    else if(n%2!=0)cout<<1<<nl;
    else
    {
        for(i=2;;i++)
        {
            if(a[(n*i)+1]==1)
            {
                cout<<i<<nl;
                break;
            }
        }
    }

    return 0;
}



