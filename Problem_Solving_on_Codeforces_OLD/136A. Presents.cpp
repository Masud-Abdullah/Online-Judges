#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=1;i<=n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[j]==i)
            {
                //arr[i-1]=arr[j]+1;
                //break;
                cout<<j+1<<" ";
            }
        }
    }

    /*for(i=0;i<n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(arr[i]==j)
            {
                arr[j-1]=j+1;
                break;
            }
        }
    }*/

    /*for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }*/

    return 0;
}
