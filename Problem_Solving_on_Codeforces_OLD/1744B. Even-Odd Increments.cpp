#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,q,i,j;
        cin>>n>>q;
        long long a[n],type,xj,even=0,odd=0,sum=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
            if(a[i]%2==0)even++;
            else if(a[i]%2!=0)odd++;
        }

        for(i=1;i<=q;i++)
        {
            cin>>type>>xj;
            if(type==0)
            {
                sum+=xj*even;
                if(xj%2!=0)
                {
                    odd=n;
                    even=0;
                }
                cout<<sum<<endl;
            }
            else if(type==1)
            {
                sum+=xj*odd;
                cout<<sum<<endl;
                if(xj%2!=0)
                {
                    even=n;
                    odd=0;
                }
            }
        }


    }

    return 0;
}


















/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,q,i,j;
        cin>>n>>q;
        long long a[n],type,xj;
        for(i=0; i<n; i++)cin>>a[i];

        for(i=0; i<q; i++)
        {
            cin>>type>>xj;

            if(type==0)
            {
                for(j=0; j<n; j++)
                {
                    if(a[j]%2==0)a[j]+=xj;
                }
            }
            else if(type=1)
            {
                for(j=0; j<n; j++)
                {
                    if(a[j]%2!=0)a[j]+=xj;
                }
            }
            long long sum=0;
            for(j=0; j<n; j++)
            {
                sum+=a[j];
            }
            cout<<sum<<endl;
        }
    }

    return 0;
}
*/
