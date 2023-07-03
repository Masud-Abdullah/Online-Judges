#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n],i,minn=1,maxx=1;
        for(i=0;i<n;i++)cin>>a[i];

        sort(a,a+n);

        for(i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])minn++;
            else break;
        }
        for(i=n-1;i>=0;i--)
        {
            if(a[i]==a[i-1])maxx++;
            else break;
        }
       // cout<<(maxx*2)*minn<<endl;

       if(a[n-1]-a[0]==0)cout<<n*(n-1)<<endl;
       else cout<<2*maxx*minn<<endl;
    }


    return 0;
}
