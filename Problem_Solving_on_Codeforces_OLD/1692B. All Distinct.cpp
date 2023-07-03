#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,cnt=1;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)cin>>a[i];

        sort(a,a+n);

        for(i=0;i<n-1;i++)
        {
            if(a[i]!=a[i+1])cnt++;
        }

        cout<<cnt<<endl;

    }

    return 0;
}
