#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],i,b=0,c=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<0)c+=a[i];
        else b+=a[i];
    }
    cout<<b-c<<endl;

    return 0;
}

