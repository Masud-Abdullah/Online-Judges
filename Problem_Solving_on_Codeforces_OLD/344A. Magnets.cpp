#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,groups=1;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)cin>>arr[i];

    for(i=0;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1])groups++;

    }
    cout<<groups<<endl;

    return 0;
}
