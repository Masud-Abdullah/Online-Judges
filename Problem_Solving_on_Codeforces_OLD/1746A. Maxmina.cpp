#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        int n,k,i,f=0;
        cin>>n>>k;
        int a[n];
        for(i=0; i<n;i++)cin>>a[i];

        for(i=0; i<n; i++)
        {
            if(a[i]==1)
            {
                f=1;
                break;
            }
        }
        if(f==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
