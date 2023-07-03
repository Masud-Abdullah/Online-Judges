#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,ans=1,maxx=1;
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++)cin>>a[i];

    for(i=0;i<n-1;i++)
    {
        if(a[i]<=a[i+1])ans++;
        else ans=1;

        if(ans>=maxx)
        {
            maxx=ans;
        }
    }

    cout<<maxx<<endl;


    return 0;
}
