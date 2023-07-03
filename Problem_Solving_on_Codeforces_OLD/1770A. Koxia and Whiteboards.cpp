#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,j;
    cin>>t;

    while(t--)
    {
        long long n,m;
        cin>>n>>m;
        long long a[n],b;

            for(i=0; i<n; i++)cin>>a[i];

            for(i=1;i<=m;i++)
            {
                cin>>b;

                long long minn=a[0];
                long long min_indx=0;

                for(j=1;j<n;j++)
                {
                    if(a[j]<minn)
                    {
                        minn=a[j];
                        min_indx=j;
                    }
                }

                a[min_indx]=b;

            }

            long long sum=0;
            for(i=0;i<n;i++)
            {
                sum+=a[i];
            }

            cout<<sum<<endl;

    }

    return 0;
}
