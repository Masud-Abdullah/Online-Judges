#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n,even=0,odd=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)even++;
        else if(a[i]%2!=0)odd++;
    }

    if(even>odd)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
    if(even<odd)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }

    return 0;
}
