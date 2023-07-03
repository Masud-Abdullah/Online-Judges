#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int hr,mn;
        cin>>hr>>mn;
        int ans=(24-hr)*60;
        ans=ans-mn;
        cout<<ans<<'\n';
    }
    return 0;
}