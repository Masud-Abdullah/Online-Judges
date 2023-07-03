#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    long long val=n/k;
    if(val%2!=0)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long n,k;
//     cin>>n>>k;
//     if(n%k==0 && (n/k)%2!=0)cout<<"YES\n";
//     else if(n%k==0 && (n/k)%2==0)cout<<"NO\n";   //contest er time er solve with asif abdullah
//     else if(n%k!=0)
//     {
//         if((n/k)%2==0)cout<<"NO\n";
//         else cout<<"YES\n";
//     }
//     return 0;
// }