#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long int n,k,ans=1,cnt=0;cin>>n>>k;
        long long int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            ans*=a[i];
        }
        sort(a,a+n);
        ans/=a[n-1];
        long long int x=a[n-1];
        for(int i=1;i<=10;i++)
        {
            if((ans*x)%k==0)
            {
                cout<<cnt<<'\n';
                break;
            }
            x++;
            cnt++;
        }
    }
    return 0;
}