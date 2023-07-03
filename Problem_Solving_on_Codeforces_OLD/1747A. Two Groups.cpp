#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n],i,sum1=0,sum2=0;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(i=0;i<n;i++)
        {
            if(a[i]<0)sum1+=abs(a[i]);
            else if(a[i]>=0)sum2+=abs(a[i]);
        }

        cout<<abs(sum1-sum2)<<endl;
    }

    return 0;
}
