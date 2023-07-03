/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[n],i,sum=0,ans;

    for(i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);

    for(i=0;i<n;i++)
    {
        sum += a[n-1]-a[i];
    }


    cout<<sum<<endl;



    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[n],i,sum1,sum2=0,ans;

    for(i=0;i<n;i++)cin>>a[i];
    int maxx=0;

    for(i=0;i<n;i++)
    {
        if(a[i]>=maxx)maxx=a[i];
    }

    sum1=maxx*n;

    for(i=0;i<n;i++)
    {
        sum2+=a[i];
    }

    ans=sum1-sum2;
    cout<<ans<<endl;



    return 0;
}



