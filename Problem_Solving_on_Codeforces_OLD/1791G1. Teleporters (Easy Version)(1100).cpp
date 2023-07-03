#include<bits/stdc++.h>
#define  nl         "\n"
#define  ll     long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c,i,sum=0,cnt=0;
        cin>>n>>c;
        int a[n];
        for(i=0;i<n;i++)cin>>a[i];

        for(i=0;i<n;i++)
        {
            a[i]+=i+1;
        }

        sort(a,a+n);

        for(i=0;i<n;i++)
        {
            sum+=a[i];
            if(sum<=c)cnt++;
            else if(sum>c)break;
        }
        cout<<cnt<<nl;

    }

    return 0;
}

