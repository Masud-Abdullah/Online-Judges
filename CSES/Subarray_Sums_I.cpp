
#include<bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> a, long long k) {
    long long int sm=0,i=0,j=0;
    int ans=0;
    while(j<a.size())
    {
        sm+=a[j];
        while(sm>k)
        {
            sm-=a[i];
            i++;
        }
        if(sm==k)
        {
            ans ++;
        }
        j++;
    }
    return ans;
}
int main()
{
    int n;cin>>n;
    long long k;cin>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int ans = longestSubarrayWithSumK(a,k);
    cout<<ans<<'\n';
    return 0;
}