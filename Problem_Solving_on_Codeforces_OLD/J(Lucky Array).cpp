#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,countt=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int minn=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<minn)minn=arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==minn)countt++;
    }

    if(countt%2!=0)cout<<"Lucky"<<endl;
    else cout<<"Unlucky"<<endl;
       // cout<<minn;

    return 0;
}
