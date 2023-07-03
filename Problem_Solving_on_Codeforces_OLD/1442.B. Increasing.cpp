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
        long long a[n],i,f=0;
        for(i=0;i<n;i++)cin>>a[i];

        sort(a,a+n);
        for(i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                f=-1;
                break;
            }
        }
        if(f==-1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }



    return 0;
}
