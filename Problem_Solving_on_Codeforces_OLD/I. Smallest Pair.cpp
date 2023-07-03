#include<bits/stdc++.h>
using namespace std;
int main()
{
    long test;
    cin>>test;
    while(test--)
    {
        long n;
        cin>>n;
        long a[n],i,j,sum=1e18;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if((a[i]+a[j]+(j+1)-(i+1))<sum)sum=a[i]+a[j]+(j+1)-(i+1);
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}
