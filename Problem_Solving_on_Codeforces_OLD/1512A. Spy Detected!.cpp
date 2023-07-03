#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i,f=0,indx;
        for(i=0; i<n; i++)cin>>a[i];

        for(i=1; i<n-1; i++)
        {
            if((a[i]!=a[i+1])&& a[i]==a[i-1])
            {
                indx=i+2;
                break;
            }
            else if((a[i]!=a[i-1]) && a[i]==a[i+1])
            {
                indx=i;
                break;
            }
            else if((a[i+1]=a[i-1]) && a[i]!=a[i+1])
            {
                indx=i+1;
                break;
            }
        }
        cout<<indx<<endl;
    }


    return 0;
}



