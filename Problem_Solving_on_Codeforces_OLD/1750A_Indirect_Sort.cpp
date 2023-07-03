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
        long long a[n],i;
        for(i=1;i<=n;i++)cin>>a[i];


        if(a[1]==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}
