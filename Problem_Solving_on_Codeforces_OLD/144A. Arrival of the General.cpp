#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,ans;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int minn=a[0],min_indx=1;
    for(i=1;i<n;i++)
    {
        if(a[i]<=minn)
        {
            minn=a[i];
            min_indx=i+1;
        }
    }

    int maxx=a[0],max_indx=1;
    for(i=1;i<n;i++)
    {
        if(a[i]>maxx)
        {
            maxx=a[i];
            max_indx=i+1;
        }
    }
    if(max_indx<min_indx)
    {
        ans=(max_indx-1)+(n-min_indx);
    }
    else
    {
        ans=((max_indx-1)+(n-min_indx))-1;
    }
     cout<<ans<<endl;

    return 0;
}
