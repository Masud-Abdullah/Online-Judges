#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,i,h=1;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)cin>>arr[i];

        if(arr[0]==1)h=2;
        for(i=1;i<n;i++)
        {
            if(arr[i]==0 && arr[i-1]==0)
            {
                h=-1;
                break;
            }
            else if(arr[i]==1 && arr[i-1]==1)h+=5;
            else if(arr[i]==1)h++;
        }
        cout<<h<<endl;
    }

    return 0;
}

