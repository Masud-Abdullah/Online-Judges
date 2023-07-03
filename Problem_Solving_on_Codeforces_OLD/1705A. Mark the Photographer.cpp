#include<bits/stdc++.h>
using namespace std;
int main()
{
    long test;
    cin >>test;
    while(test--)
    {
        long n,x,f=0;;
        cin>>n>>x;
        long h[n+n],i,j;
        for(i=0;i<n+n;i++)cin>>h[i];

        sort(h,h+(n+n));

        for(i=0,j=n;i<n,j<n+n;i++,j++)
        {
            if(h[i]-h[j]>=x || h[j]-h[i]>=x)
            {
                continue;
            }
            else {
                f=-1;
                break;
            }
        }
        if(f==-1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}
