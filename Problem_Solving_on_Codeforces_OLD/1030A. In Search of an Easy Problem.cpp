#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int n,i,flag=0;
    cin>>n;
    int arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            flag=1;
            break;
        }
    }

    if(flag==1)cout<<"HARD"<<endl;
    else if(flag==0)cout<<"EASY"<<endl;


    return 0;
}
