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
        int a[n],i,even=0,odd=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)even++;
            else odd++;
        }

        if(even==n || odd==n)cout<<"YES"<<endl;
        else
        {
            even=0,odd=0;
             for(i=0;i<n;i=i+2)
        {
            a[i]+=1;
        }

        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)even++;
            else odd++;
        }

        if(even==n || odd==n)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }





    }

    return 0;
}
