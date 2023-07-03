#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,ans;
    cin>>n>>k;

    if(n%2==0)
    {
        if(k<=n/2)
        {
            ans=k*2-1;
        }
        else if(k>n/2)
        {
            ans=(k-(n/2))*2;
        }
    }
     else
     {

        if(k<=(n+1)/2)
        {
            ans=k*2-1;
        }
        else if(k>(n+1)/2)
        {
            ans=(k-((n+1)/2))*2;
        }
     }
     cout<<ans<<endl;

    return 0;
}

















/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,i,j,arr[100],x;
    cin>>n>>k;

    for(i=0,j=0;i<n,j<=(n/2);i=i+2,j++)
    {
        arr[j]=i+1;
        x=j+1;
    }
    for(i=1,j=x;i<=n,j<n;i=i+2,j++)
    {
        arr[j]=i+1;
    }*/

    /*for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }*/

  /* // if(n%2==0)
   cout<<arr[k-1]<<endl;
    // else cout<<arr[k-2]<<endl;

    return 0;
}
*/
