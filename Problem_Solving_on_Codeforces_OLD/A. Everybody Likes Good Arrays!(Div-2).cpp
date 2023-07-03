#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long n,i,j,even=0,odd=0;
        cin>>n;
        long a[n];
        for(i=0;i<n;i++)cin>>a[i];

        //sort(a,a+n);
        for(i=1;i<n;i++)
        {
            if(a[i]%2==0 && a[i-1]%2==0)even++;
            else if(a[i]%2!=0 && a[i-1]%2!=0)odd++;
        }

        if(n==1)cout<<"0"<<endl;
        else cout<<even+odd<<endl;
    }

    return 0;
}
