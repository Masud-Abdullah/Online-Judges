#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++)cin>>a[i];

        bool f=true;
        for(int i=2;i<=n;i++)
        {
            int x = __builtin_popcount(i);
            int y = __builtin_popcount(i-1);
            if(a[i-1]>a[i] && x==1 && i!=2)f=false;
            else if(a[i-1]>a[i] && x!=1 && y!=1)f=false;
        }
        if(f)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}