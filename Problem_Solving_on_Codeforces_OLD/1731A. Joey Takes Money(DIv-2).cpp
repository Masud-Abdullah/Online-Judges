#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i;
    cin>>t;

    while(t--)
    {
        long long sum=0,n;
        cin>>n;
        long long arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        for(i=0;i<n-1;i++)
        {
            arr[0]=(arr[0]*arr[i+1]);
            arr[i+1]=1;
        }
        for(i=0;i<n;i++)
        {
            sum=sum+arr[i];
        }
        cout<<sum*2022<<endl;
    }

    return 0;
}
